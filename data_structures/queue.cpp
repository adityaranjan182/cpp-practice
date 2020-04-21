#include <iostream>

using namespace std; 
#define size 5

int arr[size];
int front = -1;
int rear = -1;
bool isempty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueue(int item)
{
    if (rear == size - 1)
    {
        cout << "queue is full" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        arr[rear] = item;
    }
}
void dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty"<<endl;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front++;
    }
    
}
void display()
{
    if(isempty())
    {
        cout<<"nothing to show, queue is empty ";
    }
    else
    {
        cout<<"current queue is ";
        for(int i = front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
}
void show_front()
{
    if(isempty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"front element: "<<arr[front]<<endl;
    }
    
}
int main()
{
    dequeue();
    enqueue(2);
    enqueue(5);
    enqueue(6);
    enqueue(3);
    enqueue(8);
    dequeue();
    display();
    show_front();
    
    return 0;
}