
#include <iostream>
using namespace std;
int main(){

  int n;
  cin>>n;
  int a[n];
  int c=0;
  for(int i = 0 ; i < n ; i++){
    cin>>a[i];
  }
  /*o(n&2) - Brute Force*/
  for(int i = 0 ; i < n ; i++){
    for(int j = i+1 ; j < n ; j++){
        if(a[i] > a[j]) c++;
    }
  }
  cout<<c;

}
