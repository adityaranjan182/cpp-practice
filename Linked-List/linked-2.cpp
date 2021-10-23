//insertion at begining, end and at any position
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node (int x){
        data = x;
        next = NULL;
    }
};

void traverse(Node* head){
    if(head == NULL) return;
    cout<<head->data<<" ";
    traverse(head->next);
}

Node* insertAtBegin(Node* head, int x){
    Node* temp = new Node(x);
    temp->next = head;
    return temp;
}

Node* insertAtEnd(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    return head;
}

Node* insertAtPos(Node* head, int pos, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node* curr = head;
    for(int i=1;i<=pos-2 && curr != NULL; i++){
        curr = curr->next;
    }
    if(curr == NULL) return head;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node* head = NULL;
    head = insertAtBegin(head, 40);
    // head = insertAtBegin(head, 30);
    // head = insertAtBegin(head, 20);
    // head = insertAtBegin(head, 10);
    head = insertAtEnd(head,10);
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,30);
    head = insertAtPos(head,3,50);
    traverse(head);
}