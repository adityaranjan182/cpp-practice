/*Given two sorted arrays arr1[] and arr2[] of sizes N and M respectively. The task is to find 
intersection of the two arrays.The intersection should not count duplicate elements.
 
Example 1:

Input: 
N = 9, arr1[] = {3, 5, 10, 10, 10, 11, 12, 15, 15}  
M = 6, arr2 [] = {5, 6, 10, 10, 12, 15}
Output: 5 10 15
*/

#include <bits/stdc++.h> 
using namespace std; 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);  

int main() 
{ 
    int T;
    cin >> T;
 
    while(T--){
        
        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }
        
        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }
 
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M); 
        
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }
    
  return 0; 
} 

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    vector<int> ans;
    int i=0, j=0;
    while(i<N && j<M){
        if(i>0 && arr1[i-1] == arr1[i]){
            i++; continue;
        }
        if(arr1[i]<arr2[j]) i++;
        else if(arr2[j]<arr1[i]) j++;
        else{
            ans.push_back(arr1[i]);
            i++; j++;
        }
    }
    return ans;
}
