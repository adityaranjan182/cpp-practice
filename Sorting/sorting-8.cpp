/*Given two sorted arrays arr[] and brr[] of size N and M respectively. The task is to find the union of these two arrays.
Input: 
N = 5, arr1[] = {2, 2, 3, 4, 5}  
M = 5, arr2[] = {1, 1, 2, 3, 4}
Output: 1 2 3 4 5
*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector <int> ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(i>0 && arr1[i-1]==arr1[i]){
            i++; continue;
        }
        if(j>0 && arr2[j-1]==arr2[j]){
            j++; continue;
        }
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++; j++;
        }
    }
    while(i<n){
        if(i==0 || (arr1[i-1] != arr1[i])){
            ans.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(j==0 || arr2[j-1] != arr2[j]){
            ans.push_back(arr2[j]);
        }
        j++;
    }
    return ans;
}

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    int N, M;
	    cin >>N >> M;
	    int arr1[N];
	    int arr2[M];
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;   
	}
	return 0;
} 