//delete first and last node
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void traverse(Node* head){
    if(head == NULL) return;
    cout<<head->data<<" ";
    traverse(head->next);
}

Node* deleteHead(Node* head){
    if(head == NULL) return NULL;
    Node* curr = head->next;
    delete head;
    return curr;
}

Node* deleteTail(Node* head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    } 
    Node* curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }
    delete curr->next;
    curr->next = NULL;
    return head;
}

Node *reverseSLL(Node *head){
    if(head==NULL || head->next==NULL) return head;
    Node *temp;
    Node *prev = NULL, *curr = head;
    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

int main(){
    Node* head = new Node(10);
    Node* temp = new Node(20);
    Node* temp1 = new Node(30);
    head->next = temp;
    temp->next = temp1;
    // head = deleteHead(head);
    // head = deleteTail(head);
    head = reverseSLL(head);
    traverse(head);
}