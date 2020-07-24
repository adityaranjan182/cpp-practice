// search an element in a sorted and rotated array

#include <iostream>

int search(int arr[], int n, int x){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid]==x) return mid;
        if (arr[mid]>arr[0]){
            if (x>=arr[0] && x<arr[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }else{
            if (x>=arr[mid+1] && x<=arr[n-1]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {8,9,10,12,13,16,20,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<search(arr,n,2)<<"\n";
    std::cout<<search(arr,n,10)<<"\n";
    std::cout<<search(arr,n,0);
}