#include<iostream>
#include<algorithm>
#include<vector>
//should on weighted graph we be using adjacency matrix ????
using namespace std;
int main(){

    //using adjacency list.
    int N,A,B;
    cin>>N;
    vector<int> adj[N];

    for(int i= 0 ; i < N ; i++){
        cin>>A>>B;

        adj[A].push_back(B);
        adj[B].push_back(A);

        adj[A].erase(std::remove(adj[A].begin(), adj[A].end(), B), adj[A].end());
        //vector<int> iterator = adj[A].find(adj[A].begin(),adj[A].end(),B);
        vector<int>::iterator it = std::find(adj[A].begin(),adj[A].end(), B);
        if(it != adj[A].end()){
            adj[A].erase(it);
        }
    }




}
