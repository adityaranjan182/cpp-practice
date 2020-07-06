/*Given an array A of positive integers. Your task is to find the leaders in the array.
An element of array is leader if it is greater than or equal to all the elements to 
its right side. Also, the rightmost element is always a leader. 
*/
#include <bits/stdc++.h>

using namespace std;

// Function to find the leaders in an array of size n
vector<int> leaders(int arr[], int n)
{
    vector<int> store;
    int initial = arr[n-1];
    store.push_back(initial);
    for (int i=n-2;i>=0;i--)
    {
        if (arr[i]>=initial)
        {
            initial = arr[i];
            auto it = store.insert(store.begin(),initial);
        }
    }
    return store;
}


int main()
{
   //int arr[] = {2,5,1,10,6,5,2,3};
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}