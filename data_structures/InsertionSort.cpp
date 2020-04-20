#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int index = i;
        int value = arr[index];
        while (index > 0 && value < arr[index - 1])
        {
            arr[index] = arr[index - 1];
            index--;
        }
        arr[index] = value;
    }
}

void display(int arr[], int n)
{
    cout << "sorted array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    cout << "enter the size of the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertionSort(arr, n);
    display(arr, n);
    return 0;
}