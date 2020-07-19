//The cost of stock on each day is given in an array A[] of size N. Find all the days on which 
//you buy and sell the stock so that in between those days your profit is maximum.

#include <bits/stdc++.h>
using namespace std;
 
// solution structure
struct Interval{
    int buy;
    int sell;
};

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int price[], int n){
    Interval ans[n/2+1];
    int i = 0,count = 0; 
    while(i<n-1){
        while (i<n-1 && price[i]>=price[i+1]){
            i++;
        }
        if(i==n-1) break;
        ans[count].buy = i;
        i++;
        while (i<n-1 && price[i]<=price[i+1]){
            i++;
        }
        ans[count].sell = i;
        count++;
        i++;
    }
    if(count == 0) cout<<"No Profit";
    else{
        for(int i=0;i<count;i++){
            cout<<"("<<ans[i].buy<<" "<<ans[i].sell<<")"<<" ";
        }
    }
}

int main(){   
    
    int price[10000],n,i,T;
    
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    // fucntion call
    stockBuySell(price, n);
    cout<<endl;
    }
    return 0;
} 