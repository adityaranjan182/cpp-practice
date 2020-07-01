//reversing an array

#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int low = 0, high = size - 1;
    while (low < high)
    {
        swap(arr[low++], arr[high--]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
}