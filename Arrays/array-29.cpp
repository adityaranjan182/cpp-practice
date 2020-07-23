//You are given an array arr[] of N integers. The task is to find the smallest positive number missing from the array.
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n) { 
    int maxx = arr[0];
    for (int i=1;i<n;i++){
        maxx = max(maxx,arr[i]);
    }
    int contains [maxx+2] = {0};
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            contains[arr[i]] = 1;
        }
    }
    int ans;
    for(int i= 1;i<maxx+2;i++){
        if(contains[i]==0){
            ans = i;
            break;
        }
    }
    return ans;
} 

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
