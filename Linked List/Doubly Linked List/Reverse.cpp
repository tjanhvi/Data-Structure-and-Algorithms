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

Node *reverse(Node *head){
    if(head == NULL || head->next == NULL) return head;
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->next;
    }
    return prev->prev;
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
    head = reverse(head);
    printlist(head);

    return 0;
}