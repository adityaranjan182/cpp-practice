/*Given two sorted arrays arr[] and brr[] of sizes N and M respectively. 
The task is to find the median of the two arrays when they get merged.
Expected Time Complexity : O(log(max(m,n)))
Expected Auxilliary Space : O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int findMedian(int *, int , int *, int);

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    
	    if(n < m)
	        cout << findMedian(arr, n, brr, m) << endl;
	   else
	        cout << findMedian(brr, m, arr, n) << endl;
	    
	}

}

// arr : given array with size n 
// brr : given array with size m
int findMedian(int arr[], int n, int brr[], int m){
    if(n>m) return findMedian(brr,m,arr,n);
    int low = 0, high = n;
    while(low<=high){
        int i1 = (low+high)/2;
        int i2 = (n+m+1)/2 - i1;
        int min1 = (i1==n)? INT_MAX : arr[i1];
        int max1 = (i1==0)? INT_MIN : arr[i1-1];
        int min2 = (i2==m)? INT_MAX : brr[i2];
        int max2 = (i2==0)? INT_MIN : brr[i2-1];
        if (max2 <= min1 && max1 <= min2){
            if((n+m)%2==0){
                return (max(max1,max2) + min(min1,min2))/2;
            }else{
                return max(max1,max2);
            }
        }else if(max1>min2) high = i1-1;
        else low = i1+1;
    }
}