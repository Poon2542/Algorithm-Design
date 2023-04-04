#include<iostream>
using namespace std;
int n,b;
int bsearch(int b,int start,int stop,int  arr[]){

    if(start == stop)
        if(arr[start] == b) return start;
        else return -1;
    int m = (start+stop)/2;
    if(arr[m] >= ) return bsearch(b,start,m,arr);
    else return bsearch(b,m+1,stop,arr);
}
int main(){

    cin>>n>>b;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int ans = bsearch(b,0,n,arr);
    cout << ans;

}
