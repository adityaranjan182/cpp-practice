/*Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, 
if the given number is 23 (00010111), it should be converted to 43(00101011). Here, 
every even position bit is swapped with adjacent bit on right side(even position bits 
are highlighted in binary representation of 23), and every odd position bit is swapped 
with adjacent on left side.*/

#include <iostream>
using namespace std;

unsigned int swapBits(unsigned int n)
{
    int evenbits = n&0xAAAAAAAA;
    int oddbits = n&0x55555555;
    return ((evenbits>>1)^(oddbits<<1));
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned int n;
		cin>>n;
		cout << swapBits(n) << endl;
	}
	return 0;
}    