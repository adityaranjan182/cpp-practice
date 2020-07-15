//prefix sum array

#include <iostream>

int sum_from(int i, int j, int arr[], int n){
    int prefix [n];
    prefix[0] = arr[0];
    for (int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+arr[i];
    }
    if(i != 0) return (prefix[j] - prefix[i-1]);
    return (prefix[j]); 
}

int main(){
    int arr[] = {2, 3, 8, 1, -5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<sum_from(1,3,arr,n)<<"\n";
    std::cout<<sum_from(0,2,arr,n)<<"\n";
    std::cout<<sum_from(3,5,arr,n);
}