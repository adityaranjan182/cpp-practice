#include <iostream>

//iterative method
int binary_search1(int arr[], int n, int element){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == element) mid;
        else if(arr[mid]> element) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}
//recursive method
int binary_search2(int arr[], int low, int high, int element){
    int mid = (low+high)/2;
    if (low>high) return -1;
    if (arr[mid]==element) return -1;
    else if (arr[mid]>element) return binary_search2(arr,low,mid-1,element);
    else return binary_search2(arr,mid+1,high,element);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<binary_search1(arr,n,6)<<"\n";
    //std::cout<<binary_search2(arr,0,n-1,5);
}

