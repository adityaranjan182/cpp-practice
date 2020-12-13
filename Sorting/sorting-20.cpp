#include <iostream>
using namespace std;

void countSort(int arr[], int n, int k){
    int count[k] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++){
        count[i] = count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>-1;i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        cout<<output[i]<<" ";
    }
}

int main(){
    int arr[] = {4,1,2,1,1,2,7,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 8;
    countSort(arr,n,k);
}