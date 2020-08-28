/*Given an array of n integers where each value represents number of chocolates in a packet. 
Each packet can have variable number of chocolates. There are m students, the task is to 
distribute chocolate packets such that:
1. Each student gets one packet.
2. The difference between the number of chocolates in packet with maximum chocolates and 
   packet with minimum chocolates given to the students is minimum.
Input : arr[] = {7, 3, 2, 4, 9, 12, 56}     2 3 4 7 9 12 56
m = 3
Output: Minimum Difference is 2*/

#include <bits/stdc++.h>
using namespace std;

int MinimumDiff(int arr[], int n, int m){
    sort(arr,arr+n);
    int ans = arr[m-1] - arr[0];
    for(int i=1;i<n-m+1;i++){
        ans = min(ans, (arr[m+i-1] - arr[i]));
    }
    return ans;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int m, n;
        cin>>m>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<MinimumDiff(arr,n,m)<<"\n";
    }
}