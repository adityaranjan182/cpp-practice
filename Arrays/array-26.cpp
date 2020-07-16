#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max1 = INT_MIN, max2= INT_MIN;
	vector <int> ans;
    for (int i=0;i<sizeOfArray;i++){
        max1 = max(arr[i],max1);
    }
	ans.push_back(max1);
	for(int i=0;i<sizeOfArray;i++){
		if (arr[i] != max1)
			max2 = max(arr[i],max2);
	}
	if (max2 == INT_MIN) ans.push_back(-1);
	else ans.push_back(max2);	
	return ans;
}


int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
} 

