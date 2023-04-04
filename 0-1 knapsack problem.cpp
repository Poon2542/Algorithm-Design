#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int arr[1010][1010];
int v[1010];
int w[1010];
int main() {
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i = 0;i < n;i++) {
        cin>>v[i];
    }
    for(int i = 0;i < n;i++) {
         cin>>w[i];
    }

    for(int i = 0;i <= n;i++) {
        for(int j = 0;j <= x;j++) {
             cin>>arr[i][j];
        }
    }
    int nowi = n;
    int nowj = x;
    //clean
    vector<int> ans;
    while(nowi > 0 && nowj > 0) {
        if(arr[nowi][nowj] != arr[nowi-1][nowj]) {
            ans.push_back(nowi);
            nowj -= w[nowi-1];
        }
        nowi--;
    }
    printf("%d\n",ans.size());
    for(auto i : ans) printf("%d ",i);
}

