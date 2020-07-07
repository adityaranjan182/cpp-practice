//maximum subarray sum

#include <iostream>

//naive solution

int max_sum1(int arr[], int n){
    int result=0;
    for(int i=0;i<n;i++){
        int current=0;
        for (int j=i;j<n;j++){
            current += arr[j];
            result = std::max(result,current);
        }
    }
    return result;
}

//kadane's algorithm

int max_sum2(int arr[],int n){
    int result = arr[0]; int max_ending = arr[0];
    for (int i=1;i<n;i++){
        max_ending = std::max(max_ending+arr[i],arr[i]);
        result = std::max(result,max_ending);
    }
    return result;
}

int main(){
    int arr[] = {1, -2, 3, -1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout<<max_sum1(arr,n)<<"\n";
    std::cout<<max_sum2(arr,n);
    return 0;
}