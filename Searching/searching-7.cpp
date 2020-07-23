//Given an infinite sized sorted array(there are millions of element), we need to write an 
//efficient solution to search index of the element otherwise return -1;

//unbounded binary search

#include <iostream>

int binary_search(int arr[], int low, int high, int element){
    if (low<=high){
        int mid = (low+high)/2;
        if (arr[mid]==element) return mid;
        else if (arr[mid]>element) return binary_search(arr,low,mid-1,element);
        else return binary_search(arr,mid+1,high,element);
    }
    return -1;
} 

int findIndex(int arr[], int x){
    if (arr[0]==x) return 0;
    int i = 1;
    while(arr[i]<x) i = i*2;
    if(arr[i]==x) return x;
    binary_search(arr,i/2+1,i-1,x);
}

int main(){
    int arr[] = {1,5,8,10,12,20,25,30,35,50,100,120,121,300,350,355,401};
    std::cout<<findIndex(arr,25)<<"\n";
    std::cout<<findIndex(arr,121)<<"\n";
    std::cout<<findIndex(arr,45);
}