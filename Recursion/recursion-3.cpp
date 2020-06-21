/*Given a rope of length n you need to find the max no. of pieces you can make
such that length of every piece is in set {a,b,c} for a given three values
a, b, c.
I/P: n = 5, a=2, b=5, c=1
O/P: 5 (if we cut the rope of length of 5 into of length 1 the we get max no. of pieces as 5)

I/O: n = 5, a=2, b=2, c=2
O/P: -1
*/
 
 #include <iostream>
 using namespace std;

int maximum(int a1, int a2, int a3)
{
    int max = a1;
    if(a2>max) max = a2;
    if(a3>max) max = a3;
    return max;
}
int max_cut(int n, int a, int b, int c)
{
    if (n==0) return 0;
    if (n<0) return -1;
    int result = maximum(max_cut(n-a,a,b,c),max_cut(n-b,a,b,c),max_cut(n-c,a,b,c));
    if (result==-1) return -1;
    return (result+1);
}

int main()
{
   cout<<max_cut(5,2,1,5)<<"\n";
   cout<<max_cut(10,3,3,9);
}