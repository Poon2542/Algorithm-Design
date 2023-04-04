#include<iostream>
using namespace std;

int bino_DP(int n,int r){

    //triangle - DP
    for(int i = 0 ; i <= n ; i++){
        table[i][0] = 1;
        table[i][1] = 1;
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j < i ; j++){
            table[i][j] = table[i-1][j] + table[i-1][j-1];
        }
    }
    return table[n][r];
}

int main(){

}
