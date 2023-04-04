#include<iostream>
using namespace std;
int value[1000];
int fibo_buttom_up(int n){

    value[0] = 0;
    value[1] = 1;
    for(int i =2 ; i<= n ; i++){
        value[i] = value[i-1]+value[i-2];
    }

    return value[n];
}
int main(){

    int n;
    cin >> n;
    int a = fibo_buttom_up(n);

    cout<< a;

}
