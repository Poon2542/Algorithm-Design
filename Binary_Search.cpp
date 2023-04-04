#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int arr[1000000];
    int n,m,a,old;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        if(i==0){for(int j=0;j<a;j++){arr[j]=-1;}}
        else{for(int j=old;j<a;j++){arr[j]=old;}}
        old=a;
    }
    for(int i=old;i<1000000;i++){arr[i]=old;}
    for(int i=0;i<m;i++){
        cin>>a;
        cout<<arr[a]<<"\n";
    }
}
