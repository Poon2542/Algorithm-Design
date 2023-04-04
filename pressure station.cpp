#include<iostream>
using namespace std;
int arr[11005],x,n,m,i,j;
int main(){

    cin>>n>>m;

    for(int i = 1 ; i <= n ; i++){
        cin>>x;
        for(j = -m; j<=m ; j++){ //predict for every range pressure station can find
            if(i+j <= 0 ) continue; //out of bound = get the fuck out
            int y = i-m-1 > 0 ? i-m-1:0; //if i-m-1 is more that 0 add them in else get 0
            arr[i+j] = arr[i+j] != 0 ? min(arr[i+j],x+arr[y]): x+arr[y];
        }
        for(int j = 1 ; j <= n ; j++){cout << arr[j]<<" ";}cout<<endl;
    }
    cout<<arr[n];


}
