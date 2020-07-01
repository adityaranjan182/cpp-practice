//deletion operation in arrays

#include <iostream>
using namespace std;

void delete_at_index(int arr[], int n, int element)
{
    bool flag = false;
    int index,newSize;
    for (index = 0;index<n;index++)
    {
        if (element==arr[index])
        {
            newSize = n-1;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout<<element <<" is not present in the array";
        return;
    }
    for (int i = index; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    for (int i=0;i<newSize;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    delete_at_index(arr, 6, 4); //delete 4 in the array
    cout<<endl;
    delete_at_index(arr, 6, 7); //delete 7 in the array
}