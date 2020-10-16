/*Given a set of time intervals in any order, merge all overlapping intervals into 
one and output the result which should have only mutually exclusive intervals
For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8} }. 
The intervals {1,3} and {2,4} overlap with each other, so they should be merged 
and become {1, 4}. Similarly {5, 7} and {6, 8} should be merged and become {5, 8}*/

#include <bits/stdc++.h>
using namespace std;

struct Interval{
    int start; int end;
};


bool Compare(Interval a, Interval b){                   
    return (a.start<=b.end);
}

void mergeInterval(Interval arr[], int n){
    sort(arr,arr+n,Compare);
    int res = 0;
    for(int i=1;i<n;i++){
        if(arr[i].start<=arr[res].end){
            arr[res].start = min(arr[res].start,arr[i].start);
            arr[res].end = max(arr[res].end,arr[i].end);
        }else{
            res++;
            arr[res] = arr[i];
        }
    }


    for(int i=0;i<=res;i++){
        cout<<arr[i].start<<"->"<<arr[i].end<<" ";
    }
}

int main(){
    Interval arr[] = {{2,4}, {1,3}, {6,8}, {5,7}};
    mergeInterval(arr,4);
}
