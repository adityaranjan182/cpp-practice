//find maximum occured element in given N ranges. given that 0<=L[i],R[i]<=1000;

#include <bits/stdc++.h>
using namespace std;

int max_occured_element(int L[], int R[], int n){
    int arr[1000] = {0};
    for (int i=0;i<n;i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int max = arr[0]; int index;
    for (int i=1;i<1000;i++){
        arr[i] += arr[i-1];
        if(max < arr[i]){
            max = arr[i];
            index = i;
        }
    }
    return index;
}

int main() { 
	int L[] = { 1, 4, 9, 13, 21 }; 
	int R[] = { 15, 8, 12, 20, 30 }; 
	int n = sizeof(L) / sizeof(L[0]); 
	cout <<max_occured_element(L, R, n) <<"\n"; 
	return 0; 
}