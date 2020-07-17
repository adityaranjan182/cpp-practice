/*Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively 
i.e first element should be max value, second should be min value, third should be second max, fourth 
should be second min and so on.
*/
#include <bits/stdc++.h>
using namespace std;

void rearrange(long long *arr, int n) 
{ 
    int ans[n];
    int low=0,high=n-1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ans[i] = arr[high--];
        }else{
            ans[i] = arr[low++];
        }
    }
    for(int i=0;i<n;i++){
        arr[i] = ans[i];
    }
}

int main() 
{
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        long long arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        rearrange(arr, n);
        
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 