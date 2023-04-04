// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a!=b){cout<<"Happy Alex"; return 0;}
    }
    cout<<"Poor Alex";
    return 0;
}

