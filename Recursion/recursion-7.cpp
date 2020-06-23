/*
Given a set of non-negative integers, and a value sum, determine 
if there is a subset of the given set with sum equal to given sum 
then find the total no. of subsets.
I/P = {10, 5, 2, 3, 6} sum = 8
O/P = 2 as {5, 3} and {2, 6}
*/
#include <iostream>

int subset_sum(int arr[],int n,int sum)
{
    if (n==0) return (sum==0)? 1:0;
    return subset_sum(arr,n-1,sum) +
           subset_sum(arr,n-1,sum-arr[n-1]);
}
int main()
{
    int arr1 [5] = {10, 5, 2, 3, 6};
    int arr2 [4] = {2, 4, 6, 8};
    std::cout<<subset_sum(arr1,5,8)<<"\n";
    std::cout<<subset_sum(arr2,4,11);
}