#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,a,b;
std::vector<int> v[100005];
std::vector<int> cycle[100005];
int visited[100005],ans;
bool check = false;
void dfs(int node,int parent){
    visited[node] = 1;
    //cout<<"Current Node is : "<<node<<" Parent is : "<<parent<<endl;
    if(node != 0){
        cycle[node].insert(cycle[node].end(),cycle[parent].begin(),cycle[parent].end());
        cycle[node].push_back(node);
    }else if(node == 0){
        cycle[node].push_back(0);
    }
    for(int i = 0 ; i < v[node].size();i++){
        if(visited[v[node][i]] != 1){
            dfs(v[node][i],node);
        }else if(v[node][i] != parent && check == false){ //cycle
            cycle[node].push_back(v[node][i]);
            check = true;
            //cout<<"True"<<endl;
            for(int j = 0 ; j < cycle[node].size();j++){
                //cout<<cycle[node][j]<<" ";
                if(cycle[node][j] == v[node][i]){
                    ans = cycle[node].size()-j-1;
                    break;
                }
            }
            //cout<<endl;
        }
    }
}
int main(){

    cin>>n;

    for(int i = 0 ; i < n ; i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(0,-1);
    cout<<ans;
    
}