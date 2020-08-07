//merge sort
#include <iostream>

void merge(int arr[], int low, int mid, int high){
    int n1 = mid-low+1, n2 = high-mid;
    int L[n1];
    int R[n2];
    for(int i=0;i<n1;i++){
        L[i] = arr[low+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[mid+i+1];
    }
    int i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if(L[i]<R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }
    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int low, int high){
    if(low<high){
        int mid = low + (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

void display(int arr[], int n){
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10,1,3,2,5,20,15,11,2};
    mergeSort(arr,0,8);
    display(arr,8);
}