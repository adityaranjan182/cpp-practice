/*Given an array arr[] of integers, find out the maximum difference between any two elements
 such that larger element appears after the smaller number.
 */

#include <iostream>
using namespace std;

int max_diff(int arr[],int n)
{
    int min_val = arr[0]; int diff = arr[1]-arr[0];
    for (int i=1;i<n;i++)
    {
        diff = max(diff, arr[i]-min_val);
        min_val = min(min_val,arr[i]);
    }
    return diff; 
}

int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<max_diff(arr,n);
}