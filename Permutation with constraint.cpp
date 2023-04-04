#include<iostream>
using namespace std;
int n,m;
int block[25][2];
void permute(int result[],int l,int r){

    if(l == r){
       // cout<<r<<endl;
        bool check = true;
        int j = 0,pos1=-1,pos2=-1;
        while(check == true && j < m){

            for(int i = 0 ; i <= r ; i++){
                if(block[j][0] == result[i]) pos1 = i;
                if(block[j][1] == result[i]) pos2 = i;
            }
            if(pos2 < pos1) check = false;
            j++;
        }


        if(check == true){
            for(int i = 0 ; i <= r;i++) cout<<result[i]<<" ";
            cout<<endl;
        }
    }
    else{
        for(int i = l; i <= r ;i++){ //swap every possibilitie

            swap(result[i],result[l]);
            permute(result,l+1,r); // go next layer
            swap(result[i],result[l]);

        }
    }
}
int main(){

    cin>>n>>m;


    int result[n];

    for(int i = 0 ; i < m ; i++){

        cin>>block[i][0]>>block[i][1];
    }

    for(int i = 0 ; i < n ; i++){
        result[i] = i;
    }


    permute(result,0,n-1);

}

