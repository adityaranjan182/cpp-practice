//check for the equilibrium point

#include <iostream>

bool is_equilibrium(int arr[], int n){
    int sum = arr[0];
    for (int i=1;i<n;i++){
        sum += arr[i];
    }
    int left_sum = 0;
    for (int i=0;i<n;i++){
        if (left_sum == (sum - arr[i])) return true;
        left_sum += arr[i];
        sum -= arr[i];
    }
    return false;
}

int main(){
    int arr[] = {2,3,9,8,16,-2};            //8 is the equilibrium point
    int arr1[] = {2,-2,4};                  //4 is the equilibrium point
    std::cout<<is_equilibrium(arr, 6)<<"\n";
    std::cout<<is_equilibrium(arr1, 3);
}