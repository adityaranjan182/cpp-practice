// { Driver Code Starts
//You are given an array of N+2 integer elements. All elements of the array are in range 1 to N. 
//Also, all elements occur once except two numbers which occur twice. Find the two repeating numbers
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

void twoRepeated(int arr[], int N){
    for(int i=0;i<N+2;i++){
        if(arr[abs(arr[i])]>0) 
            arr[abs(arr[i])] = arr[abs(arr[i])]*(-1);
        else
            cout<<abs(arr[i])<<" ";
    }
}

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        twoRepeated(a, n);
        cout<<endl;
    }
    return 0;
}