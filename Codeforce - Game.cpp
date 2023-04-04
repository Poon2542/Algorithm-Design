#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int n;

int main(){

    cin>>n;
    long long arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int top = n-1,bot = 0;
    int j = 0;
    while(n > 1){
        if(j%2 == 0)
          top--;
        else
          bot++;
        n--;
        j++;
    }
    cout<<arr[top];

}
