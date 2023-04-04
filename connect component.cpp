#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
vector<int> a[1005];
bool visited[1005];
int N,E,K;
void dfs(int x){

    visited[x] = true;
    for(auto v : a[x]){
        if(!visited[v]) dfs(v);
    }
    //s.push(x);

}
int main(){

    cin>>N>>E>>K;
    int b,c;
    for(int i = 0 ; i < N ; i++){
        cin>>b>>c;
        a[b].push_back(c);
        a[c].push_back(b);
        visited[i] = false;
    }
    int ans = 0;
    for(int i = 0 ; i < N ; i++){

        if(!visited[i]){
            dfs(i);
            ans++;
        }
    }
    cout<<ans;
}
