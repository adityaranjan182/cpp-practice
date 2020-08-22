//Quick sort using lomuto partition 
#include <iostream>
using namespace std;

int Lpartition(int arr[], int l, int h) { 
    int pivot = arr[h];
    int i = (l - 1);
    for (int j = l; j <= h- 1; j++) { 
        if (arr[j] <= pivot) { 
            i++;
            swap(arr[i], arr[j]); 
        } 
    } 
    swap(arr[i + 1], arr[h]); 
    return (i + 1); 
}

void Qsort(int arr[], int l, int h){
    if(l<h){
        int p = Lpartition(arr,l,h);
        Qsort(arr,l,p-1);
        Qsort(arr,p+1,h);
    }
}

int main(){
    int arr[] = {5,8,1,-2,0,8,12,10,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    Qsort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}