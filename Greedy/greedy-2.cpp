/*You are given n activities with their start and finish times. Select the maximum number of 
activities that can be performed by a single person, assuming that a person can only work 
on a single activity at a time.
input: {}

*/
#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return (a.second < b.second);
}

void maxActivity(pair <int, int> arr[], int n){
    sort(arr,arr+n,compare); 
    int prev = 0;
    int curr = 1;                      
    for(int i=1;i<n;i++){
        if(arr[i].first>=arr[prev].second){
            curr++;
            prev = curr;
        }
    }
    cout<<curr;
}

int main(){
    pair <int, int> arr[] =  {make_pair(3,8), make_pair(2,4), make_pair(1,3), make_pair(10,11)};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxActivity(arr, n);
}