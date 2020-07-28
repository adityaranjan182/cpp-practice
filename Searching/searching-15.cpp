/*You are given heights of consecutive buildings. You can move from the roof of a building
to the roof of next adjacent building. You need to find the maximum number of consecutive 
steps you can put forward such that you gain an increase in altitude with each step.
For each test case, print maximum number of consecutive steps he can put forward such that 
he increase in altitude, in separate lines. He initially is on the roof of the first building.

Input:
2
5
1 2 2 3 2
4
1 2 3 4
Output:
1
3
*/

#include <bits/stdc++.h>
using namespace std;

int maxStep(int A[], int N){
    int maxStep = 0, currStep = 0;
    for(int i=0;i<N-1;i++){
        if(A[i]<A[i+1]){
            currStep++;
            maxStep = max(currStep,maxStep);
        }else{
            currStep = 0;
        }
    }
    return maxStep;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    cout << maxStep(a, n) << endl;
	}
	return 0;
}
