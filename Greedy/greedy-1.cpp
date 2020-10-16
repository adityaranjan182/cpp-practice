/*Given a value V, if we want to make a change for V Rs, and we have an infinite supply of each 
of the denominations in Indian currency, i.e., we have an infinite supply of 
{ 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000} valued coins/notes, what is the minimum number of coins 
and/or notes needed to make the change?

Input: V = 70
Output: 2*/

#include <bits/stdc++.h>
using namespace std;

void minChange(int value){
    int change[]= {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int n = sizeof(change)/sizeof(change[0]);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(value>=change[i]){
            int c = value/change[i];
            value = value - c*change[i];
            ans += c;
        }
        if(value==0) break;
    }
    cout<<ans;
}

int main(){
    int value = 221;
    minChange(value);
}