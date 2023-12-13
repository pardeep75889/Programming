#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Display base."
             << "\n";
    }
    virtual void show()
    {
        cout << "Show base."
             << "\n";
    }
};
class Derived : public Base
{
    void display()
    {
        cout << "Display derived."
             << "\n";
    }
    void show()
    {
        cout << "Show derived."
             << "\n";
    }
};
int main()
{
    Base b;
    Derived d;
    Base *bptr;
    bptr = &b;
    cout << "bptr points to the base class."
         << "\n";
    bptr->display();
    bptr->show();
    bptr = &d;
    cout << "bptr now points to the derived class."
         << "\n";
    bptr->display();
    bptr->show();
    return 0;
}
