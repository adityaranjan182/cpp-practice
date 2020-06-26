//You are given two numbers n and p. You need to find n^p using recursion

#include <iostream>

double recursive_power(int n, int p)
{
    if (p == 0)
        return 1;
    if (p >= 0)
    {
        return n * recursive_power(n, p - 1);
    }
    else
    {
        return (1/double(n)) * recursive_power(n, p + 1);
    }
}
int main()
{
    std::cout << recursive_power(2, 4) << "\n";
    std::cout << recursive_power(123, 0) << "\n";
    std::cout << recursive_power(2, -2) << "\n";
    std::cout << recursive_power(-2, 4);
}