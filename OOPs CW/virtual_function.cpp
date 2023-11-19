#include<iostream>
using namespace std;
class base{
    public:
   virtual void display()
    {
        cout<<"display base"<<endl;
    }
    virtual void show(){
        cout<<"show base"<<endl;
    }
};
class derived:public base{
    void display(){
        cout<<"display derived"<<endl;
    }
    void show(){
        cout<<"show derived"<<endl;
    }
};
int main(){
    base b;
    derived d;
    base *bptr;
    cout<<"bptr points to base class"<<endl;
    bptr=&b;
    bptr->display();
    bptr->show();
    bptr=&d;
    bptr->display();
    bptr->show();
    return 0;
}