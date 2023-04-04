#include<iostream>
using namespace std;
int n;
int main(){

    cin>>n;
    int arr[n],max_so_far,max_ending_here;

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(i == 0){
            max_so_far = arr[i]; //start by saying max so far is this
            max_ending_here = arr[i];
        }else{
            max_ending_here = max_ending_here + arr[i];
            if(max_ending_here > max_so_far){
                max_so_far = max_ending_here;
            }
            if(max_ending_here < 0 ) max_ending_here = 0; //when every it become minus  we don't want it anymore
        }
    }
    cout<<max_so_far;


}
