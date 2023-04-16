#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n,m,k;
int dis[100005];
vector<int> v[100005];
queue<int> q;

int main(){
    scanf("%d %d %d",&n,&m,&k);
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=0;i<v[0].size();i++){
        dis[v[0][i]] = 1;
        q.push(v[0][i]);
    }
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            if(dis[v[x][i]] == 0){
                dis[v[x][i]] = dis[x]+1;
                q.push(v[x][i]);
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(dis[i] == k) ans++;
    }
    printf("%d",ans);
}

