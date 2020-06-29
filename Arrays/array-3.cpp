#include<bits/stdc++.h>
using namespace std;


int median(int A[],int N)
{
    
    sort(A,A+N);
    if (N%2 != 0) return A[N/2];
    else
    {
        int temp = floor((A[N/2] + A[(N/2)-1])/float(2));
        return temp;
    } 
    
}

int mean(int A[],int N)
{
    int sum = 0;
    for (int i=0;i<N;i++) sum += A[i];
    return floor(sum/float(N)); 
}


// { Driver Code Starts.

int main()
{
    //testcase
    int T;
    cin>>T;
   
    //looping testcase
    while(T--)
    {
        //number of elements in array
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        cout<<mean(a,N)<<" "<<median(a,N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends