/*
You are given a number n. You need to find the digital root of n
using recursion.
DigitalRoot of a number is the recursive sum of its digits until
we get a single digit number.
Eg. DigitalRoot(191)=1+9+1=>11=>1+1=>2
*/

#include <iostream>

int summation(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + summation(n / 10);
}

int digital_root(int n)
{
    if (n <= 9)
        return n;
    return digital_root(summation(n));
}

int main()
{
    std::cout << digital_root(1234) << "\n";  // output 1
    std::cout << digital_root(99999) << "\n"; // output 9
    std::cout << digital_root(10514);         // output 2
}