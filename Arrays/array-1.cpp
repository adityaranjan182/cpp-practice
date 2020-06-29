//Array insert at index

#include <iostream>

void insert_at_index(int arr[], int size, int index, int element)
{
    if (index > (size - 1))
        return;
    for (int i = (size - 1); i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = element;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    insert_at_index(arr, 6, 2, 90);
    for (int x : arr)
        std::cout << x << " ";
}