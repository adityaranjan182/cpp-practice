/*Given an array a[] of n integers, the task is to find the length of the 
longest Alternating Even Odd subarray present in the array.
*/

#include <iostream>
using namespace std;

//naive approach

int max_length1(int arr[], int n)
{
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        int counter = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j - 1] % 2 == 0 && arr[j] % 2 != 0 || arr[j - 1] % 2 != 0 && arr[j] % 2 == 0)
            {
                counter++;
                result = max(result, counter);
            }
            else
            {
                break;
            }
        }
    }
    return result;
}

//using kadane's approach

int max_length2(int arr[], int n)
{
    int result = 1;
    int counter = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] % 2 == 0 && arr[i] % 2 != 0 || arr[i - 1] % 2 != 0 && arr[i] % 2 == 0)
        {
            counter++;
            result = max(result, counter);
        }
        else
        {
            counter = 1;
        }
    }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_length1(arr, n) << "\n";
    cout << max_length2(arr, n);
    return 0;
}