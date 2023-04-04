#include<iostream>
using namespace std;
void bsearch(int arr[],int start,int stop,int pos){

    //cout<<start<<" "<<stop<<endl;
    if(start > stop){ //in case it goes lower than nessary. cut it out
        cout<<"-1"<<endl;
        return;
    }
    int mid = (start+stop)/2;

    if(((arr[mid] <= pos) && (pos < arr[mid+1])) ){
        cout<<mid<<endl;
        return;
    }

    if(pos < arr[mid]) //mid have already check go pass it
        bsearch(arr,start,mid-1,pos);
    else
        bsearch(arr,mid+1,stop,pos);



}
int main(){

    int N,M;

    cin>>N>>M;

    int arr1[N],t;

    for(int i = 0 ; i < N ; i++){
        cin>>arr1[i];
    }
    arr1[N]=200000000;
    for(int i = 0 ; i < M ; i++){

        cin>>t;
        bsearch(arr1,0,N-1,t);
    }









}
