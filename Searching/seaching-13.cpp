/*Given an array of distinct elements which was initially sorted. This array is rotated at some unknown point. 
The task is to find the minimum element in the given sorted and rotated array*/

#include <bits/stdc++.h>
using namespace std;

int minNumber(int arr[], int low, int high){
    if(high==0) return arr[0];
    if(low==high) return arr[low];
    int mid = (low+high)/2;
    if(arr[mid]>arr[mid+1]) return arr[mid+1];
    if(arr[mid]<arr[mid-1]) return arr[mid];
    if(arr[mid]>arr[high]) return minNumber(arr,mid+1,high);
    return minNumber(arr,low,mid-1);
}

int main(){
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];		
		cout << minNumber(a,0,n-1) << endl;
	}
	return 0;
} 