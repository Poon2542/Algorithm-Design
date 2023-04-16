#include<iostream>
#include<vector>
#include<algorithm>
std::vector<int> t;
int n,e,a,b,v[1005][2];
using namespace std;
int main(){

    cin>>n>>e;

    for(int i = 0 ; i < e ; i++){
        cin>>v[i][0]>>v[i][1];
    }

    for(int i = 0 ; i < 5 ;i++){
        t.clear();
        bool check = true;
        int map[1005];
        for(int j = 0 ; j < n ; j++){
            cin>>a;
            t.push_back(a);
            map[t[j]] = j; //เก็บลำดับเเทน คือ ณ ตำเเหน่งที่ควรจะเป็น 2 ลำดับที่วิ่งเข้ามาเป็นเท่าใหร่
        }
        for(int k = 0 ; k < n ; k++){
            if(map[v[k][0]] > map[v[k][1]]){
                check = false;
            }
        }
        if(check == true){
            cout<<"SUCCESS"<<endl;
        }else{
            cout<<"FAIL"<<endl;
        }


    }
}