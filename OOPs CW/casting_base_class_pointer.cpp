#include<iostream>
using namespace std;
class B {
    public:
    int b;
    void show()
    {
        cout<<"b has value : "<<b<<"\n";
    }
};
class D : public B
{
    public:
    int d;
    void show()
    {
        cout<<"The value of b has : "<<b<<"\n";
        cout<<"The value of d has : "<<d<<"\n";
    }
};
int main()
{
    B *bptr;
    B base;
    bptr = &base;
    bptr -> b = 100;
    cout<<"bptr points to the object : "<<"\n";
    bptr -> show();
    D derived;
    bptr = &derived;
    bptr -> b = 200;
    cout<<"bptr now points to the drived class object : ";
    bptr -> show();

    D *dptr;
    dptr = &derived;
    dptr -> d = 300;
    cout<<"dptr is now derived type pointer :\n";
    dptr -> show();
    ((D*) bptr) -> d = 400;
    ((D*) bptr) -> show();
    return 0;
}