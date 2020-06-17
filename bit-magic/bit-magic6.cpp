//Given a number N. The task is to find the length of the longest 
//consecutive 1s in its binary representation

#include <iostream>
using namespace std;

int maxConsecutiveOnes(int x)
{
    int count = 0;
    while (x != 0)
    {
        x = x & (x>>1);
        count++;
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<maxConsecutiveOnes(n)<<"\n";
    }
    return 0;
}