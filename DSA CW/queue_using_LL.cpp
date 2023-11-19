#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

class queue {
    node* head;
    node* tail;
    int size;
    public:

    queue() {
        this -> head = NULL;
        this -> tail = NULL;
        this -> size = 0;
    }

    void enqueue(int data) {
        node* newNode = new node(data);
        if(this -> head = NULL) {
            this -> head = this -> tail = newNode;
        }
        else {
            this -> tail -> next = newNode;
            this -> tail = newNode;
        }
        this -> size++;
    }

    void dequeue() {
        if(this -> head = NULL){
            return;
        }
        else {
            node* oldNode ;
        }
    }
};