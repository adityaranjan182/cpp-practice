/*Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.
(position starting from 1)

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position
is 12.*/

#include <bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int n, int s){
    int last=0;
    int start=0;
    unsigned long long  currsum=0;
    bool flag=false;
    
    for(int i=0;i<n;i++)
    {
        currsum += arr[i];
        if(currsum>=s)
        {
            last=i;
            while(s<currsum && start<last)
            {
                currsum -= arr[start];
                ++start;
            }
            if(currsum==s)
            {
                cout<<start+1<<" "<<last+1;
                flag = true;
                break;
            }
        }
    }
    if(flag==false)
    cout<<-1;
}

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        subarraySum(arr, n, s);
        cout<<endl;
        
    }
	return 0;
} 