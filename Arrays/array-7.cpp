//remove duplicates from a sorted array

#include <iostream>
using namespace std;

void remove_duplicates(int arr[], int size)
{
    int index = 0;
    //int newsize = 1;
    for (int i=1;i<size;i++)
    {
        if (arr[i] != arr[i-1])
        {
            index++;
            arr[index] = arr[i];
        }
        
    }
    for (int i=0;i<=index;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {10,20,20,30,30,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    remove_duplicates(arr,n);
}
