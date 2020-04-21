#include <iostream>

using namespace std;
#define size 5


int arr[size];
int top = -1;

bool isempty()
{
    if (top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void push(int item)
{
    if (top == size-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        top++;
        arr[top] = item;
    }
    
}
void pop()
{
    if (isempty())
    {
        cout<<"no elements to remove"<<endl;
    }
    else
    {
        top--;
    }
    
}
void show_top()
{
    if(isempty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"element at top is "<<arr[top]<<endl;
    }
    
}
void display()
{
    if (isempty())
    {
        cout<<"nothing to show, stack is empty"<<endl;
    }
    else
    {
        cout<<"current stack = ";
        for (int i = 0;i<=top;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
    
}
int main()
{
    push(2);
    push(5);
    push(4);
    push(1);
    push(9);
    pop();
    show_top();
    display();
    return 0;
}