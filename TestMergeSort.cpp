#include<iostream>
using namespace std;

void merge(int arr[],int start,int mid,int stop){


    int n1 = mid - start + 1;
    int m1 = stop - mid;

    int arr2[n1],arr3[m1];

    //keep layer array
    for(int i = 0 ; i < n1 ; i++){ arr2[i] = arr[i+start];}
    for(int i = 0 ; i < m1 ; i++){ arr3[i] = arr[i+mid+1];}

    //start compare
    int i,j,k;
    i = j = 0;
    k = start;

    while(i < n1 && j < m1){

        if(arr2[i] <= arr3[j]){
            arr[k] = arr2[i];
            i++;
        }else{
            arr[k] = arr3[j];
            j++;
        }
        k++;
    }
    //leftover
    while(i < n1){
        arr[k] = arr2[i];
        i++; k++;
    }
    while(j < m1){
        arr[k] = arr3[j];
        j++; k++;
    }


}
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}
void mergesort(int arr[],int start,int stop){

    if(start < stop){

        int m = (start+stop)/2; //trim down

        mergesort(arr,start,m);
        mergesort(arr,m+1,stop);

        //go furthest down before starting calculating
        merge(arr,start,m,stop);
    }


}
// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergesort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(arr, size);
  return 0;
}
