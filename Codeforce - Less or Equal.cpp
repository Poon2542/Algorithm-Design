#include <bits/stdc++.h>
using namespace std;
int main()
{
int n, q=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n);
for(int i=0;i<n;i=i+2)q=q+abs(a[i]-a[i+1]);
cout<<q;
}
