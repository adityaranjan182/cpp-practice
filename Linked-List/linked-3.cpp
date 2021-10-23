// searching data in linked list
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

int search1(Node* head, int x){
    int pos = 1;
    Node* curr = head;
    while(curr != NULL){
        if(curr->data == x) return pos;
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

int search2(Node* head, int x){
    if(head == NULL) return -1;
    if(head->data == x) return 1;
    else{
        int res = search2(head->next,x);
        if(res == -1) return -1;
        else return (res+1);
    }
}

int main(){
    Node* head = new Node(10);
    Node* temp = new Node(20);
    Node* temp1 = new Node(30);
    head->next = temp;
    temp->next = temp1;
    cout<<search2(head,30)<<"\n";
    cout<<search2(head,40);

}