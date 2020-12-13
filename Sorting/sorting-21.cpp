#include <iostream>
using namespace std;

void countSort(int arr[], int n, int exp){
    int count[10] = {0};
    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i] = count[i-1]+count[i];
    }
    int output[n];
    for(int i=n-1;i>-1;i--){
        output[count[(arr[i]/exp)%10]-1] = arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n){
    int mx = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    for(int exp=1;(mx/exp)>0;exp*=10){
        countSort(arr,n,exp);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {219,100,20,415,8,10,2,100};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixSort(arr,n);
}