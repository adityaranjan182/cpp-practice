#include <iostream>
using namespace std;

// void swap(int a,int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
void bubble_sort(int arr[], int n)
{
    for (int i = 0;i<n-1;i++)
    {
        int flag = 0;
        for (int j = 0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                //swap(arr[j+1],arr[j]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;
            }
        }
        if (flag==0)
        {
            break;
        }
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
    bubble_sort(arr, n);
    display(arr,n);
}