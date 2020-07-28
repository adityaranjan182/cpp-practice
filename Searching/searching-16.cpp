/*Given an array arr[] of N positive integers, where elements are consecutive (sorted). 
Also, there is a single element which is repeating X (any variable) number of times. 
Now, the task is to find the element which is repeated and number of times it is repeated.
Input:
2
5
1 2 3 3 4
5
2 3 4 5 5

Output:
3 2
5 2
*/

#include <bits/stdc++.h>
using namespace std;

//naive approach
pair<int, int> findRepeating1(int *arr, int n){
    pair<int, int> ans;
    int count = 1;
    for(int i=0;i<n-1;i++){
        if((arr[i+1]-arr[i])==0){
            count++;
            ans.first = arr[i];
        }
    }
    ans.second = count;
    return ans;
}

//binary search
pair<int, int> findRepeating2(int *arr, int n){
    if(n==0) return {0,0};
    if(n==(arr[n-1]-arr[0]+1)) return {-1,-1};
    int low = 0, high = n-1;
    int mid = 0;
    while(low<high){
        mid = (low+high)/2;
        if(arr[mid]>=mid+arr[0])
            low = mid+1;
        else
            high = mid;
    }
    return {arr[mid], n-(arr[n-1]-arr[0])};
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    //pair<int, int> ans = findRepeating1(arr,n);
	    pair<int, int> ans = findRepeating2(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}