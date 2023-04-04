#include<iostream>
using namespace std;
int c[10005],n,m,x,y;
int main(){

    int n ;
    cin>>n;

    int l = 3;


    for(int i = 1 ; i  <= n ; i++){
        cin>>m;
        for(int j = 0 ; j < l ; j++){
            //normal case no bomb
            if(i + j > 0){ //เคสที่หลุดเกิน array มาเเล้ว
                x = i+j;
                if(i-l > 0){ // case we have before iteration
                    if(c[x] == 0) //first time going in
                        c[x] = m;
                    else if(c[i-l] + m > c[x] ) //case that slot is not empty we need to compare if it's better than other
                        c[x] = c[i-l]+m;
                }else{
                    if(m > c[x]){ //we dont have before iteration no need to check it just check the present
                        c[x] = m;
                    }
                }
            }
        }
    }
    int max = 0;
    for (int i = 1 ; i <= n ; i++){
        if(max < c[i]) max = c[i];
    }
    cout<<max;


}
