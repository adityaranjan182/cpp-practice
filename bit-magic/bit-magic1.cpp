// To check the kth bit from right is set or not

#include <iostream>
#include <math.h>

bool check_rightmost_bit(int n, int k)                 
{                                                      
    int a = n&int(pow(2,(k-1)));                
    if (a==int(pow(2,(k-1))))
    {
        return true;
    }
    return false;
}

bool using_rightshift(int n, int k)
{
    return ((n>>(k-1)&1)==1);
}

int main()
{
    int n,k;
    std::cout<<"enter an integer : ";
    std::cin>>n;
    std::cout<<"kth bit : ";
    std::cin>>k;
    std::cout<<check_rightmost_bit(n,k)<<"\n";
    std::cout<<using_rightshift(n,k);
}