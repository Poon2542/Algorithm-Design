#include<iostream>
using namespace std;
int n;
int main(){

    cin>>n;
    int arr[n],tot = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    for(int i = 0 ; i < n  ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]) tot++;
        }
    }

    cout <<tot;
}
