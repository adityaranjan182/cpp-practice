//Tower of Hanoi
#include <iostream>
using namespace std;

void movement(int n, char a, char b, char c)
{
    if (n==1)
    {
        cout<<"move disk 1 from tower "<<a<<" to "<<c<<"\n";
        return;
    }
    movement(n-1,a,c,b);
    cout<<"move disk "<<n<<" from tower "<<a<<" to "<<c<<"\n";
    movement(n-1,b,a,c);
}
int main()
{
    movement(3,'A','B','C');
}