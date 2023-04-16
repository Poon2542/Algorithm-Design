#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

const int MAXN(1005);
vector<int>a[MAXN];
int st[MAXN], top = 0,n,k; //kept value as stack
bool visited[MAXN];
void dfs(int node){

    visited[node] = true;

    for(int i = 0 ; i < a[node].size();i++){
        int u = a[node][i];

        if(!visited[u]) dfs(u); //warp เลย
    }

     st[top++] = node; //เราจะได้ปลายสายเสมอ !!



}
int main(){

    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>k;
        for(int j = 0 ; j < k ; j++){
            int x;
            cin>>x;
            a[x].push_back(i);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
            dfs(i);
    }
    while(top>0){
        cout<<st[--top]<<" ";
    }
}