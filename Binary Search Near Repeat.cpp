#include<iostream>
#include <bits/stdc++.h>
using namespace std;
long n,m;
long binary_search_near(long a[],long temp,long start,long stop){
    if(start > stop) return -1; //left is more than right so it already fail
    int mid = (start + stop)/2; //middle ground check
    if(a[mid] <= temp && a[mid+1] > temp) return mid; //it's the right answer

    //forwarding case
    if(temp < a[mid]) binary_search_near(a,temp,start,mid-1);
    else binary_search_near(a,temp,mid+1,stop);

}

int main(){

    cin>>n>>m;
    long a[n],b[m];

    for(int i = 0 ; i <  n ; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    a[n] = 2000000;
    for(int i = 0,temp = 0; i < m ; i++){
        cin>>temp;
        b[i] = binary_search_near(a,temp,0,n-1);
    }
    for(int i = 0,temp = 0; i < m ; i++){
        cout<<b[i]<<endl;
    }

}
