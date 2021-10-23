//circular linked list
#include<iostream>
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
    Node* curr = head->next;
    while (curr != head){
        cout<<curr->data<<" ";
        curr = curr->next;
    }  
}

Node* insertAtBegin1(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
    }else{
        Node* curr = head->next;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

Node* insertAtBegin2(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
    }else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = x;
        temp->data = t;
    }
    return head;
}

Node* insertAtEnd(Node* head, int x){
    Node* temp = new Node(x);
    if(head == NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = head->data;
        head->data = x;
        temp->data = t;
        return temp;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL) return NULL;
    if(head->next == head){
        delete head;
        return NULL;
    }
    head->data = head->next->data;
    Node* temp = head->next;
    head->next = head->next->next;
    delete temp;
    return head;
}

Node* deleteKthNode(Node* head, int position){
    if(head == NULL) return head;
    if(position == 1) return deleteHead(head);
    Node* curr = head;
    for(int i=1;i<position-1;i++){
        curr = curr->next;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}

int main(){
    Node* head = new Node(10);
    Node* temp1 = new Node(20);
    Node* temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = head;
    head = insertAtBegin1(head, 0);
    head = insertAtBegin2(head, -10);
    head = insertAtEnd(head, 40);
    head = deleteHead(head);
    head = deleteKthNode(head, 3);
    traverse(head);
    return 0;

}