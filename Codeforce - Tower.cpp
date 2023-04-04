#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int n,a,arr[1000],ma,siz;
int main(){

    cin >> n ;

    for(int i = 0 ; i < n ; i++){
        cin>> a;
        arr[a]++;
        if(arr[a] > ma ) ma = arr[a];
        if(arr[a] == 1) siz++;
    }

    cout<<ma<<" "<<siz;
}
