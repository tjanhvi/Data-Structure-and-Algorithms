#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

Node* insertAtIndex(Node* head, int data, int index){
    Node *ptr = new Node();
    Node* temp = head;
    int i=0;
    while (i != index-1)
    {
      temp = temp->next;
      i++;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    ptr->data = data;

    return head; 
}

void traversing(Node* head){
    Node *ptr = head;
    while (ptr != NULL){
        cout << ptr -> data<<" ";
        ptr = ptr -> next;   
    }
}

Node* creation(int n){
    Node* head = NULL;
    Node* temp = NULL;
    int data;
    for(int i = 0; i < n ; i++){
        cout<<"Enter the data : ";
        cin>>data;
        temp = new Node();
        temp -> data = data;
        temp -> next = NULL;
        if (head == NULL){
            head = temp;
        }else{
            Node* p = head;
            while(p->next != NULL){
                p = p->next;
            }
            p->next = temp;
        }
    }
    return head;
}

int main()
{
    int n,data,index;
    cout <<"Enter the no of element : ";
    cin >> n;
    Node* head = creation(n);
    cout<<"Enter the element which you want to insert : ";
    cin>>data;
    cout<<"Enter the index where you want to insert : ";
    cin>>index;
    head = insertAtIndex(head, data, index);
    traversing(head);

    return 0;
}