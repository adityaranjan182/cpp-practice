//Hoare partition

#include <iostream>
using namespace std;

int Hpartition(int arr[], int left, int right){
    int pivot = arr[0];
    while(true){
        do{
            left++;
        }while(arr[left]<pivot);
        do{
            right--;
        }while(arr[right]>pivot);
        if(left>=right) return right;
        swap(arr[left],arr[right]);
    }
}

int main(){
    int arr[] = {10, 2, 6, 12, 5, 6, 13};
    cout<<Hpartition(arr,-1,7);
}