//to check if the array is sorted of not

#include <iostream>
using namespace std;

bool check_sorted(int arr[], int size)
{
    for (int i=1;i<size;i++)
    {
        if (arr[i] < arr[i-1]) return false;
    }
    return true;
}

int main()
{
    int arr[] = {10,10,30,40,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<check_sorted(arr,n);
}