#include<iostream>
using namespace std;
class stack 
{
    int capacity;
    int* arr;
    int top;
    public:
    int Stack (int c) {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    void push (int data) {
        if(this -> top == this -> capacity - 1) {
            cout<<"Overflow\n";
            return;
        }
        this -> top++;
        this -> arr[this -> top] = data;
    }

    int pop() {
        if(this -> top == -1) {
            cout<<"Underflow\n";
            return;
        }
        this -> top--;
    }

    int getTop() {
        if(this -> top == -1) {
            cout<<"Underflow\n";
            return;
        }
        return this -> arr[this -> top];
    }

    bool isEmpty() {
        return this -> top == -1;
    }

    int size() {
        return this -> top + 1;
    }

    bool isFull() {
        return this -> top == this-> capacity - 1;
    }
};

int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.getTop()<<"\n";
}