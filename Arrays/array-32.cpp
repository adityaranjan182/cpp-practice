//Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n) {
    int left[n]; int right[n];
    left[0] = arr[0]; right[n-1] = arr[n-1];
    for (int i=1;i<n;i++){
        left[i] = min(arr[i],left[i-1]);
        right[n-i-1] = max(arr[n-i-1],right[n-i]);
    }

    int i=0,j=0,result=0;
    while(i<n && j<n){
        if(left[i]<=right[j]){
            result = max(result,(j-i));
            j++;
        }else{
            i++;
        }
    }
    return result;
}

int main() {
    int T;
    cin>>T;
    while(T--){
        int num;
        cin>>num;
        int arr[num];
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        if(num ==1 ){
            cout<<0<<endl;
            continue;
        }
        cout<<maxIndexDiff(arr, num)<<endl;    
    }
    return 0;
} 

