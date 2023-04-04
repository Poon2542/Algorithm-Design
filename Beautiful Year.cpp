#include<iostream>
using namespace std;

int main(){

    int y,ans;

    cin >> y;

    bool year = true;
    y++;
    while(year){

        int a = (y/1000) % 10;
        int b = (y/100) % 10;
        int c = (y/10) % 10;
        int d = y % 10;

        if(a == b || a == c || a == d || b == c || b == d || c == d){ year = true; y++;}
        else{
            year = false;
        }
    }

    cout << y;
}
