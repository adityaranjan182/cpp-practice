//doubly linked list

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int x){
        data = x;
        prev = NULL;
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
    if(head != NULL) head->prev = temp;
    return temp;
}

Node* insertAtEnd(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL) return temp;
    Node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node* reverseDLL(Node* head){
    if(head == NULL || head->next == NULL) return head; 
    Node* temp = NULL; Node* curr = head;
    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }
    return temp->prev;
}

Node* deleteHead(Node* head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    Node* curr = head;
    while (curr->next != NULL){
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
    
}

int main(){
    Node* head = NULL;
    head = new Node(10);
    Node* temp = new Node(20);
    Node* temp1 = new Node(30);
    head->next = temp;
    temp->prev = head;
    temp->next = temp1;
    temp1->prev = temp;

    head = insertAtBegin(head,0);
    head = insertAtEnd(head,40);
    head = reverseDLL(head);
    // head = deleteHead(head);
    // head = deleteTail(head);
    traverse(head);
}