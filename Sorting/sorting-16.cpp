//Sort an array containing two types of elements(positive and negative) in constant space and linear time

#include <iostream>
using namespace std;

//using lomuto partition
void Segregate1(int arr[], int n){
    int pivot = 0;
    int i = -1;
    for (int j=0;j<n;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
}

void segregate2(int arr[], int n){
    int i = -1, j = n;
    while(true){
        do{i++;} while (arr[i]<0);
        do{j--;} while (arr[j]>0);
        if(i>=j) return;
        swap(arr[i],arr[j]);
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        segregate2(arr,n);
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    }
}