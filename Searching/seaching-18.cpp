/*Given an array arr[] of size N and an element k. The task is to find all elements in array that appear more than n/k times.

Example 1:

Input:
N = 8
arr[] = {3,1,2,2,1,2,3,3}
k = 4
Output: 2
Explanation: In the given array, 3 and
 2 are the only elements that appears 
more than n/k times.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countOccurence(int arr[], int n, int k);

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        cout << countOccurence(arr, n, k) << endl;
    }
    return 0;
}

int countOccurence(int arr[], int n, int k) {
    sort(arr,arr+n);
    int count = 0, curr = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            curr++;
        }else{
            if(curr>n/k) count++;
            curr = 1;
        }
    }
    if((arr[n-1]==arr[n-2]) && curr>n/k) count++; 
    return count;
}