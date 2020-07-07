//Given binary array, find count of maximum number of consecutive 1’s present in the array.

#include <iostream>

int max_count(int arr[], int n){
    int result = 0,current = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            current++;
            result = std::max(current,result);
        }else{
            current = 0;
        }
    }
    return result;
}

int main(){
    int arr[]  = {1, 1, 0, 0, 1, 1, 1, 0};
    std::cout<<max_count(arr,8);
    return 0;
}