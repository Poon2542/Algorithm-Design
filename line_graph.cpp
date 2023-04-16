#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
std::vector<int> v[100005];
int visited[100005],tot;
bool check = false;
void dfs(int x,int last){

        visited[x] = 1;
        if(x == last){
            if(v[x].size() > 3) check = false;
        }else{
            if(v[x].size() > 2) check = false;
        }
        for(int i = 0 ; i < v[x].size() ; i++){
            if(visited[v[x][i]] != 1){
                dfs(v[x][i],x);
            }
        }


}
int main(){

    int c,e;
    int a,b;

    cin>>c>>e;

    for(int i = 0 ; i < e ; i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i = 0 ; i < c ; i++){
        check = true;
        if(visited[i]  != 1){
            dfs(i,i);
            if(check == true){
                tot += 1;
                //cout<<"Result is :"<<i<<endl;
            }
        }
    }
    cout<<tot;
}