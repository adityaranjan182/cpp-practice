//finding two odd appearing numbers in an array

#include <iostream>

void odd_appearing(int arr [], int size)
{
    int res=0, set=0, notset=0;
    for (int i=0;i<size;i++) res ^= arr[i];
    int setbit = res & (~(res-1));
    for (int i=0;i<size;i++)
    {
        if(arr[i] & setbit == 1) set ^= arr[i];
        else notset ^= arr[i];
    }
    std::cout<<set<<" and "<<notset;
}

int main()
{
    int A [12] = {4,5,1,3,4,1,8,9,4,3,4,9};
    odd_appearing(A,12);
}