//count occurence in sorted array

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

int lastOCC(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x) high = mid-1;
        else if(arr[mid]<x) low = mid+1;
        else{
            if(mid==n-1 || arr[mid] != arr[mid+1])
                return mid;
            else low = mid+1;
        }
    }
    return -1;
}

int countOCC(int arr[], int n, int x){
    int left = firstOCC(arr,n,x);
    if(left == -1) return -1;
    return (lastOCC(arr,n,x) - left +1);
}

int main(){
    int arr[] = {1, 1, 2, 3, 3, 3, 3, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<countOCC(arr,n,3);
}