#include <iostream>
using namespace std;

#define size 5

int arr[size];
int top1 = -1;
int top2 = size;

bool isempty()
{
    if (top1==-1 && top2==size)
    {
        return true;
    }else
    {
        return false;
    }
    
}
void push1(int item)
{
    if(top1<top2-1)
    {
        top1++;
        arr[top1] = item;
    }else
    {
        cout<<"stack 1 overflow"<<endl;
    }
    
}
void push2(int item)
{
    if (top2>top1+1)
    {
        top2--;
        arr[top2] = item;
    }else
    {
        cout<<"stack 2 overflow"<<endl;
    }
    
}
void pop1()
{
    if (top1>=0)
    {
        top1--;
    }else
    {
        cout<<"stack 1 underflow"<<endl;
    }
    
}
void pop2()
{
    if (top2<size)
    {
        top2++;
    }else
    {
        cout<<"stack 2 underflow"<<endl;
    }
    
}
int main()
{
    push1(4);
    push1(5);
    push1(6);
    push1(7);
    
}