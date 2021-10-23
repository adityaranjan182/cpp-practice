//create a linked list and traverse it
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

    Node (int x){
        data = x;
        next = NULL;
    }
};

void traverse1(Node* head){
    Node* curr = head;
    while (curr != NULL)
    {
        cout<<curr->data<<" ";
        curr = curr->next;
    }
}

void traverse2(Node* head){
    if(head == NULL) return;
    cout<<head->data<<" ";
    traverse2(head->next);
}

int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;

    traverse1(head);
    cout<<"\n";
    traverse2(head);
    return 0;
}