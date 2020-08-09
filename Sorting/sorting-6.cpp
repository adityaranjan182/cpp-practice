/*Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).*/


#include <bits/stdc++.h>
using namespace std;

#define ll long long int

ll countAndMerge(ll arr[], ll low, ll mid, ll high){
    ll n1 = mid-low+1;
    ll n2 = high-mid;
    ll L[n1], R[n2];
    for(int i=0;i<n1;i++){
        L[i] = arr[low+i];
    }
    for(int i=0;i<n2;i++){
        R[i] = arr[mid+i+1];
    }
    ll ans = 0;
    ll i=0, j=0, k=low;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]) arr[k++] = L[i++];
        else{
            arr[k++] = R[j++];
            ans = ans + (n1-i);
        }
    }
    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
    return ans;
}

ll inversionCount(ll arr[], ll low, ll high)
{
    ll ans = 0;
    if(low<high){
        ll mid = low + (high-low)/2;
        ans += inversionCount(arr,low,mid);
        ans += inversionCount(arr,mid+1,high);
        ans += countAndMerge(arr,low,mid,high);
    }
    return ans; 
}

int main() {
    ll T;
    cin >> T;
    while(T--){
        ll N;
        cin >> N;
        ll A[N];
        for(ll i = 0;i<N;i++){
            cin >> A[i];
        }   
        cout << inversionCount(A,0,N-1) << endl;
    } 
    return 0;
}
