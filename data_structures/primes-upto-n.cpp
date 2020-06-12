// the sieve of eratosthenes

#include <bits/stdc++.h>
using namespace std;

void find_primes(int n)
{
    int arr [n+1];
    for (int i=2;i<=n;i++)
    {
        arr[i]=1;
    }
    for (int i=2;i<sqrt(n);i++)
    {
        if (arr[i]==1)
        {
            for (int j=2;i*j<=n;j++)
            {
                arr[i*j]=0;
            }
        }
    }
    for (int i=2;i<=n;i++){
        if(arr[i]==1) cout<<i<<" ";
    }
}
int main()
{
    find_primes(100);
}