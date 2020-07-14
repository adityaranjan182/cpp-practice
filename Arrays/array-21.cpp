//if you are given an unsorted array containing non-negative integers 
//then check if there is a subarray containing the sum = k

#include <iostream>

//sliding window method
bool check_subarray(int arr[], int n, int sum){
    int curr_sum = arr[0];
    int start = 0;
    for (int end = 1;end < n;end++){
        while (curr_sum > sum && start<end-1){
            curr_sum -= arr[start++];
        }
        if(curr_sum == sum) return true;
        if(curr_sum < sum) curr_sum += arr[end];
    }
    return (curr_sum == sum);
}

int main(){
    int arr[] = {1,4,20,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;
    std::cout<<check_subarray(arr,n,sum);
    return 0;
}