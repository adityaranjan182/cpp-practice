/*
  Given an array containing n elements in range [1, n+1], so that one number is missing, find the missing number.
*/
#include<iostream>
using namespace std;

int missingNumber(int a[], int n)
{
    int res = 0;
    for (int i=0;i<n;i++)
    {
        res ^= (a[i]^(i+1));
    }
    return res^(n+1);
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Missing Number : "<<missingNumber(a, n)<<endl;
    return 0;
}
