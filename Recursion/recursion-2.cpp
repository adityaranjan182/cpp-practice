#include <iostream>
using namespace std;

int countDigits1(int n,int count=0)    //using recursion
{
   if (n==0) return 1;
   return 1 + countDigits1(n/10);
}

int countDigits2(int n)                //converting int to string and then taking the size of the string
{
   string str = to_string(n);
   int count = str.size();
   return count;
}

int main()
{
    cout<<countDigits1(-123)<<"\n";
    cout<<countDigits2(0)<<"\n";
    cout<<countDigits2(123);
}