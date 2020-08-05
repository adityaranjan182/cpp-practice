//Bubble sort
#include <iostream>

int BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                std::swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {2,5,9,1,3,7,12,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
}