// Bucket Sort
#include <bits/stdc++.h>
using namespace std;

void bucketSort(int arr[],int n, int k){
    int mx;
    for (int i=0;i<n;i++){
        if(arr[i]>mx) mx = arr[i];
    }
    mx++;
    vector <int> bucket[k];
    for(int i=0;i<n;i++){
        int bki = (k*arr[i])/mx;
        bucket[bki].push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        sort(bucket[i].begin(),bucket[i].end());
    }
    int index = 0;
    for(int i=0;i<k;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[index++] = bucket[i][j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {30,40,10,80,5,12,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    bucketSort(arr,n,k);
}