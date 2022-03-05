#include<bits/stdc++.h>
using namespace std;

//-------------------------------------------------//
// initialising linked list.

struct Node{
    int data;
    struct Node* next;
}*head;

// OR WRITE THIS WAY->

// struct Node{
//     int data;
//     struct Node* next;
// };

// Node* head;

void push_at_end(int key){
    Node* newNode = new Node();
    newNode->data = key;
    if(head == NULL){
        head = newNode;
    }else{
        Node* p = head;
        while(p->next != NULL){
            p=p->next;
        }
        p->next=newNode;
    }
}

void printList(){
    Node* p = head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
//-------------------------------------------------//

void reverse(){
    Node* NewHead = NULL;
        while(head){
            Node* nextt = head->next;
            head ->next = NewHead;
            NewHead = head;
            head = nextt;
        }
        head = NewHead;
}

int main(){
    head = NULL;
    push_at_end(1);
    push_at_end(2);
    push_at_end(3);
    push_at_end(4);
    push_at_end(5);
    push_at_end(6);
    printList();
    cout<<endl;
    reverse();
    printList();
    
}