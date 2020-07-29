/*Given a sorted array arr[] of size N without duplicates, and given a value x. Find the floor of x in given array. 
Floor of x is defined as the largest element K in arr[] such that K is smaller than or equal to x.
Input:
3
7 0
1 2 8 10 11 12 19
7 5
1 2 8 10 11 12 19
7 10
1 2 8 10 11 12 19

Output:
-1
1
3
*/

#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x){
    long long int  low = 0, high = n-1, ans = -1;
    while(low<=high){
        long long int mid = (low+high)/2;
        if(v[mid]==x) return mid;
        else if (v[mid]>x) high = mid-1;
        else{
            low = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    
	    cout << findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
} 