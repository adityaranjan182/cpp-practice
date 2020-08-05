//Selection sort
#include <iostream>

int SelectionSort(int arr[], int n){
    int minIndex,i,j;
    for(i=0;i<n-1;i++){
        minIndex = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        std::swap(arr[i],arr[minIndex]); 
    }
    for(int index=0;index<n;index++){
        std::cout<<arr[index]<<" ";
    }
}

int main(){
    int arr[] = {2,5,9,1,3,7,12,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,n);
}