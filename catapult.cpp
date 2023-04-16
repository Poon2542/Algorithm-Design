#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

const int MAXN(1005);

vector<int> g[MAXN], gr[MAXN], ans;
vector<int> order;
bool used[MAXN];
int n, component;

void dfs1(int v){
    used[v] = true;
    for(int i=0;i<g[v].size();i++)
        if(!used[g[v][i]])
            dfs1(g[v][i]);
    order.push_back(v);
}

void dfs2(int v){
    used[v] = true;
    component++;
    for(int i=0;i<gr[v].size();i++)
        if(!used[gr[v][i]])
            dfs2(gr[v][i]);
}

void SCC() {
    for(int i=0;i<n;i++)
        used[i] = false;
    for(int i=0;i<n;i++)
        if(!used[i])
            dfs1(i);
    for(int i=0;i<n;i++)
        used[i] = false;
    for(int i=0;i<n;i++) {
        int v = order[n-1-i];
        if(!used[v]) {
            dfs2(v);
            ans.push_back(component);
            component = 0;
        }
    }
}

int main(){

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        for(int j=0;j<k;j++)
        {
            int x;
            scanf("%d",&x);
            g[i].push_back(x);
            gr[x].push_back(i);
        }
    }

    SCC();

    sort(ans.begin(),ans.end());

    for(int i=0;i<ans.size();i++)
        printf("%d ",ans[i]);
}


