/*
Given a number and its reverse. Find that number raised to the power of its own reverse.
Note: As answers can be very large, print the result modulo 10^9 + 7.
for test case 12:
The reverse of 12 is 21 and 12^21 , when divided by 1000000007 gives remainder as 864354781.
*/
#include <iostream>

long long reverse(long long n, long long number = 0)
{
    if (n == 0)
        return number;
    else
    {
        number = number * 10 + (n % 10);
        return reverse(n / 10, number);
    }
}

long long power(long long n, long long r)
{
    if(r==0) return 1;
    return n*power(n,r-1)%1000000007;
}


int main()
{
    long long n = 14;
    long long r = reverse(n);
    std::cout << power(n,r);
}