/*Given an array A[] of N positive integers which can contain integers from 1 to N 
where elements can be repeated or can be absent from the array. Your task is to 
count the frequency of all elements from 1 to N.
*/
#include<bits/stdc++.h> 
using namespace std; 


void frequencycount(vector<int>& arr,int n)
{ 
    int counter[arr.size()] = {0};
    for (int i=0;i<arr.size();i++){
        counter[arr[i]-1]++;
    }
    for (int i=0;i<arr.size();i++){
        arr[i] = counter[i];
    }
}

int main() 
{ 
	long long t;
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n; 
	    
	    vector<int> arr(n,0);
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i]; 
	    }

		frequencycount(arr,n); 
	    for (int i =0; i<n; i++) 
			cout<<arr[i]<<" ";
	    cout<<endl;
	}	
	return 0; 
}




  // } Driver Code Ends