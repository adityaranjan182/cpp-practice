/*Given an array arr[] of N positive integers and a number K. The task is to find the kth smallest element in the array.

Example 1:

Input: N = 5, K = 3
arr[] = [3 5 4 2 9]
Output: 4*/


#include <bits/stdc++.h>
using namespace std;

int Lpartition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}

int kthSmallest(int arr[], int n, int k){
    int low = 0, high = n-1;
    while(low<=high){
        int p = Lpartition(arr,low,high);
        if(p == (k-1)) return arr[k-1];
        else if (p>k-1) high = p-1;
        else low = p+1;
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){ 
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    cout << kthSmallest(arr, n, k) << endl;
	}
	return 0;
} 