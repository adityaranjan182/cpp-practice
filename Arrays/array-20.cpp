//maximum sum of subarray of size k

#include <iostream>
using namespace std;

//naive approach
int max_sum1(int arr[], int n, int k){
    int result = 0;
    for (int i=0;i<=n-k;i++){
        int curr_sum = arr[i];
        for (int j=i+1;j<k+i;j++){
            curr_sum += arr[j];
        }
        result = max(result,curr_sum);
    }
    return result;
}

//sliding window technique

int max_sum2(int arr[], int n, int k){
    int prev_sum = 0;
    int result = 0;
    for (int i=0;i<k;i++){
        prev_sum += arr[i];
    }
    for (int i=k;i<n;i++){
        prev_sum += (arr[i] - arr[i-k]);
        result = max(result,prev_sum);
    }
    return result;
}

int main(){
    int arr [] = {5, 6, -2, 1, -9, 2, 2, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<max_sum1(arr,n,k)<<"\n";
    cout<<max_sum2(arr,n,k);
    return 0;
}