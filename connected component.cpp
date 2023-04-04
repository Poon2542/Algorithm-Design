#include <bits/stdc++.h>
using namespace std;
vector<int> V[10100];
vector<int> VT[10100];
bool visit[10100];
stack<int> s;
void dfs(int x) {
    visit[x] = true;
    for(auto v : V[x]) {
        if(!visit[v]) dfs(v);
    }
    s.push(x);
}
void dfs2(int x) {
    visit[x] = true;
    for(auto v : VT[x]) {
        if(!visit[v]) dfs2(v);
    }
}

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 0;i < m;i++) {
        int a,b;
        scanf("%d %d",&a,&b); a--; b--;
        V[a].push_back(b);
        V[b].push_back(a);
    }
    for(int i = 0;i < n;i++) {
        visit[i] = false;
    }
    int ans = 0;
    for(int i = 0;i < n;i++) {
        if(!visit[i]) {
            dfs(i);
            ans++;
        }
    }
    /*for(int i = 0;i < n;i++) {
        visit[i] = false;
    }
    int ans = 0;
    while(!s.empty()) {
        if(!visit[s.top()]) {
            dfs2(s.top());
            ans++;
        }
        s.pop();
    }*/
    printf("%d",ans);
}

