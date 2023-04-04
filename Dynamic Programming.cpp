#include<iostream>
using namespace std;
int table[1000],n;
int fibo_memo(int n){

    if(n==1 || n == 0)
        return n;

    if(n >= 2){
        if(table[n] > 0){
            return table[n];
        }
        int value = fibo_memo(n-1) + fibo_memo(n-2);
        table[n] = value;
        return value;
    }
}
int main(){


    cin>>n;

    int a = fibo_memo(n);
    cout<<a;
}
