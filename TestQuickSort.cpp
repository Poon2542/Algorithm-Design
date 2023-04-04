/* C++ implementation of Quicort */
#include <bits/stdc++.h>
using namespace std;

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int start,int stop){

    int pivot = arr[stop];

    int i = (start-1);

    for(int j = start ; j <= stop-1 ; j++){

        if(arr[j] < pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[stop]);
    return (i+1);
}

void quickSort(int arr[],int start,int stop){

    if(start < stop){

        //create pivot
        int pi = partition(arr,start,stop);
        partition(arr,start,pi);
        partition(arr,pi+1,stop);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver Code
int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}

// This code is contributed by rathbhupendra
