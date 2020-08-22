//Quick sort using hoare partition

#include <iostream>
using namespace std;

int Hpartition(int arr[], int l, int h){
    int pivot = arr[l];
    int low = l-1, high = h+1;
    while(true){
        do{
            low++;
        }while(arr[low]<pivot);
        do{
            high--;
        }while(arr[high]>pivot);
        if(low>=high) return high;
        swap(arr[low],arr[high]);
    }
}

int Qsort(int arr[], int l, int h){
    if(l<h){
        int p = Hpartition(arr,l,h);
        Qsort(arr,l,p);
        Qsort(arr,p+1,h);
    }
}

int main(){
    int arr[] = {5,8,1,-2,0,8,12,10,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Qsort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}