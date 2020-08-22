//lomuto partition

#include <iostream>
using namespace std;

void Lpartition(int arr[], int n, int pivot){
    int i = -1;
    swap(arr[pivot],arr[n-1]);
    for(int j=0;j<n;j++){
        if(arr[j]<arr[n-1]){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[n-1]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10, 2, 6, 12, 5, 6, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    Lpartition(arr,n,2);
}