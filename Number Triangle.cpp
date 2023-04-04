#include<iostream>
using namespace std;
int arr[1005][1005],n;
int main(){

    cin >> n;
    int t = 0;
    int temp,min = 0;
    for(int b = 0 ; t < n ; b++){
        cin >> temp;
        if(t == 0){
            arr[0][0] = temp;
        }else{
            //cout<<"b is"<<" "<<b<<endl;
            if(b == 0){
                arr[t][b] = arr[t-1][b] + temp;
                //cout<<"b = 0"<<endl;
            }
            else if(b == t){
                arr[t][b] = arr[t-1][b-1] + temp;
                //cout<<"b == t"<<endl;
            }
            else{
                if(arr[t-1][b-1] + temp > arr[t-1][b] + temp)
                    arr[t][b] = arr[t-1][b-1] + temp;
                else
                    arr[t][b] = arr[t-1][b] + temp;
            }
        }
        if(min < arr[t][b])
            min = arr[t][b];
        if(t == b){
            //cout<<"t==b"<<endl;
            b = -1;
            t++;
        }
    }

    //for(int i = 0 ; i < n ; i++){
     //   for(int j = 0 ; j <= i ; j++){
     //       cout<<arr[i][j]<<" ";
     //   }
     //   cout<<endl;
   // }
    cout << min;
}
