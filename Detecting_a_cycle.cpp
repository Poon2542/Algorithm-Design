#include <iostream>
#include <vector>
#include <algorithm>
vector<int> v[1005];
int visited[1005];
int last;
int ans=0;
using namespace std;
int dfs(int x,int last){
    visited[x] = 1;
    for(int i = 0 ; i < v[x].size() ; i++){
        if(v[x][i] == last) continue;
        if(visited[v[x][i]]){
            ans = 1;
            return 0;
        }
        else
            dfs(v[x][i],x);
    }
}
int main(){

    int T,n,e,a,b;
    cin>>T;

    while(T > 0){
        cin>>n>>e;
        //clear dumb space
        for(int i = 0 ; i < n ; i++){
            v[i].clear();
            visited[i] = 0;
        }

        
        for(int i = 0 ; i < n ; i++){ //for safety we need to manually check all node by traverse everything
            if(!visited[i]) // if not traverse
            {
                last=-1;
                dfs(i,-1);
            }
        }
        cout<<(ans == 1 ? "YES":"NO");
        cout<<"\n";
    }
}