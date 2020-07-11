/*Write a function which takes an array and returns the majority element (if it exists),
otherwise return -1. A majority element in an array A[] of size n 
is an element that appears more than n/2 times
*/

//naive approach

#include <iostream>

int majority_element1(int arr[], int n){
    for (int i=0;i<n;i++){
        int count = 1;
        for (int j=1+i;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            return arr[i];
        }
    }
    return -1;
}

//Moore’s Voting Algorithm

int majority_element2(int arr[] ,int n){
    int result = 0; int count = 1;
    for (int i=1;i<n;i++){
        if (arr[result]==arr[i]) count++;
        else count--;
        if (count==0){
            result = i; count = 1;
        }
    }
    int total_counts = 0;
    for (int i=0;i<n;i++){
        if (arr[i]==arr[result]) total_counts++;
    }
    if (total_counts>(n/2)) return arr[result];
    else return -1;
}



int main(){
    int arr [] = {3, 3, 4, 2, 4, 4, 2, 4, 4}; 
    int n = (sizeof(arr))/sizeof(arr[0]);
    std::cout<<majority_element1(arr,n)<<"\n";
    std::cout<<majority_element2(arr,n);
}