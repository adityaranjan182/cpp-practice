#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int item)
{
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if (arr[mid]==item)
        {
            return mid;
        }
        else if (arr[mid]>item)
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;                  
        }
    }
    return -1;
}
int binary1(int arr[],int start,int end,int item)
{
    if (start<=end)
    {
        int mid = (start+end)/2;
        if (arr[mid]==item)
        {
            return mid;
        }
        else if (item<arr[mid])
        {
            return binary1(arr,start,mid-1,item);
        }
        else
        {
            return binary1(arr,mid+1,end,item);
        } 
    }
    return -1;
}
int main()
{
    int n = 7;
    int arr[n] = {1,2,3,4,5,6,7,8};
    int result=BinarySearch(arr,8,7);
    int result1=binary1(arr,0,n-1,9);
    cout<<"item is present at index = "<<result<<endl;
    cout<<"item is present at index = "<<result1<<endl;
    return 0;
}