#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector<int> v[1005];
int visited[1005];
int n,e,k ,a,b ,c;
void dfs(int start,int distance){
    
    if(distance <= k){
        visited[start] = 1;
        
        if(start != 0 && distance == k){
            c++;
            //cout<<start<<endl;
        }
        for(int i = 0 ; i < v[start].size() ; i++){
            if(visited[v[start][i]] != 1){
                //cout<<start<<" "<<v[start][i]<<endl;
                dfs(v[start][i],distance+1);
            }
        }
    }
}
int main(){
    
    cin>>n>>e>>k;

    for(int i = 0 ; i < e ; i++){
        cin>>a>>b;

        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(0,0);
    cout<<c;
}