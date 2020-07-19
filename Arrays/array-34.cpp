/*Given an array arr[] of N distinct integers, check if this array is Sorted (non-increasing or non-decreasing) 
and Rotated counter-clockwise. Note that input array may be sorted in either increasing or decreasing order, 
then rotated. A sorted array is not considered as sorted and rotated, i.e., there should be at least one rotation.
*/
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
}

bool checkRotatedAndSorted(int arr[], int num){
    int min_index = 0;
    for(int i=1;i<num;i++){
        if (arr[i]<arr[min_index])
            min_index = i;
    }
    bool decrease1 = true, increase1 = true;
    for (int i=0;i<min_index-1;i++){
        if (arr[i]>arr[i+1])
            increase1 = false;
        if(arr[i]<arr[i+1])
            decrease1 = false;
    }
    bool decrease2 = true, increase2 = true;
    for (int i=min_index+1;i<num-1;i++){
        if(arr[i]>arr[i+1])
            increase2 = false;
        if(arr[i]<arr[i+1])
            decrease2 = false;
    }
    if(decrease1 && decrease2 && arr[num-1] > arr[0]) return true;
    if(increase1 && increase2 && arr[num-1] < arr[0]) return true;
    return false;
}

int main()
 {
	int T;
	cin>> T;
	
	while (T--){
	    int num;
        cin>>num;
        int arr[num];
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        
        flag = checkRotatedAndSorted(arr, num);
        
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}