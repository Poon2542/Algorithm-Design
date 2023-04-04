#include<iostream>
#include<string>
using namespace std;
int a,n;
void Barcode(int curr,int len,int a,int n,string fin){


    //DONT USE SIZE JUST KEEP LENGTH FOR TRACKING INT !!!!!!
    if(len == n){
        if(curr == a) //we don't want other 00000 we want exactly 11 2 point
            cout<<fin<<endl;
        return ;
    }

    //you can't use append here because if you use it will also remember into current iteration
    if(curr < a){
        Barcode(curr,len+1,a,n,fin + "0"); //start with 0
        Barcode(curr+1,len+1,a,n,fin + "1");
    }else{
        Barcode(curr,len+1,a,n,fin + "0");
    }




}

int main(){

    cin>> a>>n;

    Barcode(0,0,a,n,"");


}
