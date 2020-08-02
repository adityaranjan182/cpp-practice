/*You are given N number of books. Every ith book has Ai number of pages.You have to allocate books to M 
number of students. There can be many ways or permutations to do so. In each permutation, one of the M 
students will be allocated the maximum number of pages. Out of all these permutations, the task is to 
find that particular permutation in which the maximum number of pages allocated to a student is minimum 
of those in all the other permutations and print this minimum value. 
Each book will be allocated to exactly one student. Each student has to be allocated at least one book.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order 
(see the explanation for better understanding).

Example 1:

Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output: 113
Explanation: 
Allocation can be done in following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90}  Maximum Pages =113
Therefore, the minimum of these cases is 
113, which is selected as the output.*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int findPages(int arr[], int n, int m);

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        cout << findPages(A, n, m) << endl;
    }
    return 0;
}

bool isValid(int arr[], int n, int m, ll mid){
    int student = 1;
    ll currSum = 0;
    for(int i=0;i<n;i++){
        if(mid<arr[i]) return false;
        if(arr[i]+currSum > mid){
            currSum = arr[i];
            student++;
            if(student>m) return false;
        }else{
            currSum += arr[i];
        }
    }
    return true;
}

int findPages(int *arr, int n, int m) {
    if(n<m) return -1;
    ll totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum += arr[i];
    }
    ll low = 0, high = totalSum;
    ll ans = INT_MAX;
    while(low<=high){
        ll mid = (low+high)/2;
        if(isValid(arr,n,m,mid)){
            ans = min(ans,mid);
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

