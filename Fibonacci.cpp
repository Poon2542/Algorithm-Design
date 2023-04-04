#include<iostream>
using namespace std;
int n;
int main(){

    cin>>n;
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;

    for(int i = 2 ; i <= n ; i++){

        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<arr[n];

}
/*
// A naive recursive C++ implementation
#include<iostream>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
int fib(int n)
{
    // Base Cases
    if(n <= 1)
        return n;

    return fib(n-1) + fib(n-2);
}


/* Driver code
int main()
{
    int n ;
    cin >> n;
    cout << fib(n);
}

// This is code is contributed by rathbhupendra*/
