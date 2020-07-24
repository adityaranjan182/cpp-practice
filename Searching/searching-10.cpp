//Given a sorted array A (sorted in ascending order), having N integers, find if there exists 
//any pair of elements (A[i], A[j]) such that their sum is equal to X
//two pointer approach

#include <iostream>

bool checkPair(int arr[], int n, int x){
    int left = 0, right = n-1;
    while(left<right){
        int currSum = arr[left]+arr[right]; 
        if(currSum== x) return true;
        else if(currSum<x) left++;
        else right--;
    }
    return false;
}

int main(){
    int arr [] = {1,2,4,6,8,9,11,12,15,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<checkPair(arr, n, 18)<<"\n";
    std::cout<<checkPair(arr, n, 25);
}
