#include<iostream>
using namespace std;
int n,k;
int b_coff(int n,int k){

    //base case
    if(n == k || k == 0)
        return 1;
    if(1 <= k && k <= n-1)
        return b_coff(n-1,k-1)+b_coff(n-1,k);


}

int main(){

    cin>>n>>k;

    int ans =  b_coff(n,k);

    cout<<ans;
}
