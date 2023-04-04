
#include <bits/stdc++.h>
#include<iostream>
#define INF (unsigned)!((int)0)
using namespace std;

// This code is
int count(int coins[], int n, int sum)
{
    int table[sum+1];
    memset(table,-1,sizeof(table));

    //base case
    table[0] = 0;
    for (int i = 1; i <=sum; i++){
        for(int j = 0 ; j < n ; j++){
            if(coins[j] <= i){
                if(i - coins[j] == 0)
                    table[i] = 1;
                else {
                    if(table[i] == -1)
                        table[i] = 1+table[i-coins[j]];
                    else
                        table[i] = min(table[i],1+table[i-coins[j]]);
                }
            }
            //cout<<"I = "<<i<<" :";
            //for(int k = 0 ; k <= sum ; k++)
            //    cout<<table[k]<<" ";
            //cout<<endl;
        }
    }


    return table[sum];

}

// Driver Code
int main()
{
    int n,sum;

    cin>>n>>sum;

    int coins[n];

    for(int i = n-1 ; i >= 0 ; i--){
        cin>>coins[i];
    }
    //for(int i = 0 ; i <n ; i++){
    //    cout<<coins[i]<<" ";
    //}
    //cout<<endl;

    cout << count(coins, n, sum);
    return 0;
}
