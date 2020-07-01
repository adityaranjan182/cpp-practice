//left rotation an array by d

#include <iostream>
using namespace std;

//method 1  (naive solution)

void left_rotate1(int arr[], int size, int d)
{
    int temp[d - 1];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < size; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[size - d + i] = temp[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

//method 2   (reversal algorithm)

void reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
}

void left_rotate2(int arr[], int size, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, size - 1);
    reverse(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    left_rotate1(arr1, 8, 3);
    cout << "\n";
    left_rotate2(arr2, 8, 3);
}