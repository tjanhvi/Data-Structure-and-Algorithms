#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printlist(Node *head){
    if(head==NULL)return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

//Naive method - O(n)
Node *insertEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
        return head;
    } 
}

//Efficient method - O(1)
Node *insertEnd(Node *head,int data){
    Node *temp=new Node(data);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    else{
        temp->next = head->next;
        head->next = temp;
        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return temp;
    }
}

int main() 
{ 
	Node *head=new Node(10);
	Node *temp1=new Node(20);
	Node *temp2=new Node(30);
	head->next=temp1;
	temp1->prev=head;
	temp1->next=temp2;
	temp2->prev=temp1;
	head=insertEnd(head,5);
	printlist(head);
	return 0;
} 
