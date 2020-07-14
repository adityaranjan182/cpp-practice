// You are given two Integers N and M, and print all the terms of the series upto M-terms of the N-bonacci Numbers

#include <iostream>
using namespace std;

void n_bonacci(int n, int m){
    int m1 = 0, m2 = 0, m3 = 1;
    cout<<m1<<" "<<m2<<" "<<m3<<" ";
    for (int i=4;i<=m;i++){
        int next = m1+m2+m3;
        cout<<next<<" ";
        m1 = m2; m2 = m3; m3 = next;
    }
}

//sliding window technique
void n_bonacci1(int n, int m){
    int arr[m] = {0};
    arr[n-1] = 1; arr[n]= 1;
    for (int i=n+1;i<m;i++){
        arr[i] = arr[i-1] + (arr[i-1] - arr[i-n-1]);
    }
    for (int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 3; int m = 10;
    n_bonacci(n,m);
    cout<<"\n";
    n_bonacci1(4,m);
}