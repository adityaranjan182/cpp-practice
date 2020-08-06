//binary array sorting
// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming
#include <iostream>
using namespace std;

void binSort(int A[], int N);


int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}

void binSort(int A[], int N)
{
   int count = 0;
   for(int i=0;i<N;i++){
       if(A[i]==0) count++;
   }
   for(int i=0;i<N;i++){
       if(i<count){
           A[i] = 0;
       }else{
           A[i] = 1;
       }
   }
}
