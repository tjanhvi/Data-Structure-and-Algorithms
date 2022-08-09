//maintain two pointers front and rear

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

struct Queue{
    Node *front, *rear;
    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        if(front == NULL){
            fromt = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue(int x){
        if(front == NULL)
            return;    
        Node *temp = front;
        front = front->next;

        if(front == NULL){
            rear = NULL:
        }
        delete(temp);
    }
}

int main(){


    return 0;
}