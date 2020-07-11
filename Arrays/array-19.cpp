/*Given a binary array, we need to find the minimum of number of group flips 
to make all array elements same and print indexes of group to be flipped.  
In a group flip, we can flip any set of consecutive 1s or 0s.
e.g - arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 1}
O/P = flip from 1 to 3
      flip from 5 to 6
      flip from 8 to 8
*/

#include <iostream>
using namespace std;

void min_flips(int arr[], int n){
    for (int i=1;i<n;i++){
        if (arr[i] != arr[i-1]){
            if (arr[i] != arr[0]){
                cout<<"flip from "<<i<<" to ";
            }else{
                cout<<(i-1)<<"\n";
            }
        }
    }
    if (arr[n-1] != arr[0]){
        cout<<(n-1)<<"\n";
    }
}

int main(){
    int arr[] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    min_flips(arr, n);
}
