#include<iostream>
using namespace std;

class mathematics {
    int x, y;
    public:
    void input() {
        cout<<"Enter the first no. : ";
        cin>>x;
        cout<<"Enter the second no. : ";
        cin>>y;
    }
    void add() {
        cout<<"Sum of these no. : "<< x + y;
    }
};

int main() {
    mathematics m;
    m.input();
    m.add();
}