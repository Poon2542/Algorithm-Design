#include<iostream>
using namespace std;
int n,m,t;
int main(){

    cin>>t;

    for(int k = 0 ; k < t ; k++){

        cin>>n>>m;
        int arr1[n],arr2[m],res;

        for(int i = 0 ; i < n ; i++){
            cin>>arr1[i];
        }
        for(int j = 0 ; j < m ; j++){
            cin>>arr2[j];
        }
        bool boo = false;
        for(int j = 0 ; j < m ; j++){
            for(int i = 0 ; i < n ; i++){
                if(arr2[j] == arr1[i]) {boo = true; res = i+1; break;}
            }
        }
        if(boo == true){
            cout<<"YES\n1 "<<res<<endl;
        }else{
            cout<<"NO\n";
        }

    }
}
