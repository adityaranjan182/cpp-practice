/*Given an array A of N integers. The task is to find a peak element in it in O( log N ) .
An array element is peak if it is not smaller than its neighbours. For corner elements, 
we need to consider only one neighbour
Note: There may be multiple peak element possible, in that case you may return any valid index.
*/

#include<bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n)
{
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if  ((mid== 0 || arr[mid-1] <= arr[mid]) &&
            (mid==n-1 || arr[mid+1] <= arr[mid]))
            return mid;
        else if(mid>0 && arr[mid]<=arr[mid-1])
            high = mid-1;
        else
            low = mid+1;
    }
    return -1;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int A = peakElement(a,n);
		cout<<a[A]<<"\n";
	}
	return 0;
}