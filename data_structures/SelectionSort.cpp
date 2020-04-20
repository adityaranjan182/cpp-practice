#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        for (int j = i+1;j<n;j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
void display(int arr[],int n)
{
    cout<<"sorted array is : ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout << "enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout<<"enter the elements : ";
    for (int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr, n);
    display(arr,n);

    return 0;
}