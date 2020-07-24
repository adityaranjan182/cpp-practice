//Given an array of integers, write a function that returns true if there is a triplet (a, b, c) 
//that satisfies a^2 + b^2 = c^2

#include <bits/stdc++.h>
using namespace std;

bool checkPair(int arr[], int left, int right, int x){
    while(left<right){
        int currSum = arr[left]+arr[right]; 
        if(currSum== x) return true;
        else if(currSum<x) left++;
        else right--;
    }
    return false;
}

bool haveTriplet(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i] = arr[i]*arr[i];
    }
    sort(arr,arr+n);
    for (int i=n-1;i>=2;i--){
        if(checkPair(arr,0,i-1,arr[i])){
            return true;
        }
    }
    return false;
}

int main(){
    int arr [] = {-3, 1, 4, 6, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<haveTriplet(arr,n);
}