/*Given an array arr[] of N non-negative integers representing the height of blocks at index i 
as Ai where the width of each block is 1. Compute how much water can be trapped in between 
blocks after raining.
Bars for input {3,0,0,2,0,4}
Total trapped water =  3+3+1+3=10
*/
// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

int trappingWater(int arr[], int n){
    int store = 0;
    int lmax[n],rmax[n];
    lmax[0] = arr[0]; rmax[n-1] = arr[n-1];
    for (int i=1;i<n;i++){
        lmax[i] = max(lmax[i-1],arr[i]);
    }
    for (int i=n-2;i>=0;i--){
        rmax[i] = max(rmax[i+1],arr[i]);
    }
    for (int i=0;i<n;i++){
        store += min(lmax[i],rmax[i]) - arr[i];
    }
    return store;
}

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
} 