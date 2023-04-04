#include<iostream>
#include <bits/stdc++.h>
using namespace std;
long long  n,m;
int main(){

    cin>>n>>m;
    long long  a[n],total = 0,tic = 0;
    for(int i = 0 ; i < n ; i++){
        long long  b,c;
        cin>>b>>c;

        total += b;
        a[i] = b-c;
    }
    sort(a,a+n);
    /*for(int i = 0 ; i < n ; i++){
        cout << a[i]<<" ";
    }*/
    n -=1;
    while(total > m && n >= 0){
        total -= a[n];
        tic++;
        n--;
    }
    if(total <= m) cout<<tic;
    else cout<<"-1";

}
