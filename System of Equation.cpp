#include<iostream>
using namespace std;
int c;
int main(){

    int n,m;

    cin >>n>>m;

    for(int a = 0 ; (a*a) <= n ; a++){
        int b = n-(a*a);
        if((b*b)+a == m)
            c++;
    }

    cout << c;
}
