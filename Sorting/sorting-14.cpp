//Given an unsorted array arr[] of positive integers. Find the number of triangles that can be formed 
//with three different array elements as lengths of three sides of triangles. 

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    int findNumberOfTriangles(int arr[], int n)
    {
        sort(arr,arr+n);
        int count = 0;                              //1 2 3 4 5 7
        for(int i=n-1;i>=0;i--){
            int l = 0, r = i-1;
            while(l<r){
                if(arr[l]+arr[r]>arr[i]){
                    count += r-l;
                    r--;
                }else{
                    l++;
                }
            }
        }
        return count;
    }
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}  // } Driver Code Ends