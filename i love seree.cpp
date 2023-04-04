#include<iostream>
using namespace std;
int main(){

    int n;
    cin >> n;
    int arr[n];
    int mi,ma,t;

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];

    }
    mi = arr[0];
    ma = arr[0];
    for(int i = 1 ; i < n ; i++){
        if(arr[i] < mi){
            mi = arr[i];
            t++;
        }
        if(arr[i] > ma){
            ma = arr[i];
            t++;
        }
    }
    cout<<t;
}
