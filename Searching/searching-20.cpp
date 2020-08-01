/*Given an integer array representing the heights of N buildings, the task is to delete N-2 buildings such that 
the water that can be trapped between the remaining two building is maximum.
Note: The total water trapped between two buildings is gap between them (number of buildings removed) multiplied 
by height of the smaller building.

Example 1:

Input:
N = 6
height[] = {2,1,3,4,6,5}
Output: 8
Explanation: The heights are 2 1 3 4 6 5.
So we choose the following buildings
2 1 3 4 6 5  and remove others. So total
removed buildings is equal to 4, now the
height of smaller one is 2. So answer is
2 * removed buildings = 2*4 = 8. There is
no answer greater than this.*/
// { Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 

//naive approach
int maxWater1(int height[], int n) {
    int maxStore = -1, currStore;
     for(int i=0;i<n-1;i++){
         currStore = 0;
         for(int j=n-1;j>i;j--){
             currStore = (j-i-1)*min(height[i],height[j]);
             maxStore = max(maxStore, currStore);
         }
     }
     return maxStore;
} 

//efficient approach 
int maxWater2(int height[], int n){
    int maxStore = -1, currStore = 0;        
    int i=0,j=n-1;
    while(i<j){
        currStore = (j-i-1)*min(height[i],height[j]);
        maxStore = max(maxStore, currStore);
        if(height[i]<height[j]) i++;
        else j--;
    }
    return maxStore;
}

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++){
            cin>>height[i];
        }
        cout<<(maxWater2(height, n))<<endl;
    }	 
} 
