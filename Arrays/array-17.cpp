//maximum circular array sum

#include <iostream>
using namespace std;

//naive solution
int max_circular_sum(int arr[], int n)
{
    int result = arr[0];
    for (int i = 0; i < n; i++)
    {
        int current_sum = arr[i];
        int current_max = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            current_sum += arr[index];
            current_max = max(current_max, current_sum);
        }
        result = max(current_max, result);
    }
    return result;
}
//---------------------------------------------------------------------------------//

//using kadane's approach
int normal_sum(int arr[], int n)
{
    int result = arr[0];
    int max_ending = arr[0];
    for (int i = 1; i < n; i++)
    {
        max_ending = max(arr[i], max_ending + arr[i]);
        result = max(result, max_ending);
    }
    return result;
}

int circular_sum(int arr[], int n)
{
    int temp = normal_sum(arr, n);
    if (temp < 0)
        return temp;
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
        arr[i] = -arr[i];
    }
    int circular_sum = total + normal_sum(arr, n);
    return max(temp, circular_sum);
}

int main()
{
    int arr[] = {-1, 40, -14, 7, 6, 5, -4, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << max_circular_sum(arr, n) << "\n";
    cout << circular_sum(arr, n);
    return 0;
}