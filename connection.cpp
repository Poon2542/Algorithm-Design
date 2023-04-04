#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
int N,E,K;
int numfriend;
vector<int> v={}; //empty vector

void dkf(vector<int> adj[],int s ,int now,int path){
    if(find(v.begin(),v.end(),now) == v.end()){ //didn't find the preferred node
        v.push_back(now);
        numfriend++;
    }
    if(path == k) return;
    for(int &att:adj[now]) dkf(adj,s,att,path+1);//traverse current adjaccent (vector<int>) with attribute and and numfriend


}
int main(){

    cin>>N>>E>>K;

    vector<int> adj[N];

    for(int i = 0 ; i < N ; i++){

        cin>>A>>B;
        adj[A].push_back(B);
        adj[B].push_back(A); //push_back push value into vector
    }
    int maxi = 0;
    for(int i = 0 ; i < N ; i++){ // run every node

        numfriend = 0;
        v = {}; //empty vector<int> v;
        dkf(adj,s,s,0);
        (numfriend>maxi)?maxi = numfriend :maxi=maxi;
    }
}






