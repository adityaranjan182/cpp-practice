//count 1's in binary sorted array

#include <iostream>

int firstOCC(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x) high = mid-1;
        else if(arr[mid]<x) low = mid+1;
        else{
            if(mid==0 || arr[mid] != arr[mid-1])
                return mid;
            else high = mid-1;
        }
    }
    return -1;
}

int countONE(int arr[], int n){
    return (n - firstOCC(arr,n,1));
}

int main(){
    int arr[] = {0,0,0,0,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<countONE(arr,n);
}