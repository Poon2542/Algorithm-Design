
#include<iostream>

#include <bits/stdc++.h>
int table[10005];
using namespace std;
int main(){

    int n;
    cin>>n;



    for(int i = 0,t = 0 ; i < n ; i++){
        cin>>t;
        //cout<<"T = "<<t<<endl;

        if(i == 0) {
            table[i] = t;
            //cout<<"We are Here"<<endl;
        }
        if(i == 1){
            if(table[0] < t) table[i] = t;
            else table[i] = table[0];
        }else{
            if(table[i-2] + t > table[i-1]) table[i] = table[i-2] + t;
            else{
                table[i] = table[i-1];
            }
        }
        //for(int j = 0 ; j < n ; j++){cout<<table[j]<<" ";}

        //cout<<endl;
    }
    cout<<table[n-1];

}
