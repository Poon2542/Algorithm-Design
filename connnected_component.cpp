#include<iostream>
#include<vector>
#include<algorithm>

std::vector<int> n[10005];
int visited[10005];
int count = 0;
using namespace std;
void dfs(int x){
    visited[x] = 1;
    for(int i = 0 ; i < n[x].size() ; i++){
        if(visited[n[x][i]] != 1){
            dfs(n[x][i]);
        }
    }
}
int main(){

    int v,e;
    int a,b;
    int c = 0;

    cin>>v>>e;

    for(int i = 0 ; i < e ; i++){
        cin>>a>>b;
        n[a].push_back(b);
        n[b].push_back(a);
    }
    for(int i = 1 ; i <= v ; i++){
        /*for(int j = 1 ;j <= v ; j++){
            cout <<visited[i]<<" ";
        }
        cout<<endl;*/
        if(visited[i] != 1){
            dfs(i);
            c++;
        }
    }
    cout<<c;

}