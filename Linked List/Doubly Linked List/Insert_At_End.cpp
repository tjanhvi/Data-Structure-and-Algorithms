#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *insertAtEnd(Node *head, int data){
    Node * temp = new Node(data);
    if(head == NULL) return temp;
    Node *curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

void printlist(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr=curr->next;
    }cout << endl;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    head = insertAtEnd(head, 5);
    printlist(head);

    return 0;
}