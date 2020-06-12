//to count the no. of set bits in an number
//we are considering the number to be in 32 bit representation

#include <iostream>

int count_setbits1(int n)
{
    int count = 0;
    while (n>0)
    {
        count += (n&1);
        n = n>>1;
    }
    return count;
}

int count_setbits2(int n)
{
    int count = 0;
    while(n>0)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}

int count_setbits3(int n)           //In this method we group the number in 8 bits junk
{
    int table[256];
    table[0]=0;
    for (int i=1;i<256;i++)
    {
        table[i] = (i&1)+table[i/2];
    }
    return table[n & 255] +          //checking for the last 8 bits
        table[(n >> 8) & 255] +      // then shifting the number by 8 bits
        table[(n >> 16) & 255] +
        table[n >> 24]; 
}

int main()
{
    int n;
    std::cout<<"enter non-negative integer : ";
    std::cin>>n;
    std::cout<<count_setbits1(n)<<"\n"; //naive method

    std::cout<<count_setbits2(n)<<"\n";  //Brian and Kerningham Algorithm

    std::cout<<count_setbits3(n);
}