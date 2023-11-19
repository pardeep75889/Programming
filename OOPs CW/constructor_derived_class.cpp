#include<iostream>
using namespace std;

class alpha {
    int x;
    public:
    alpha(int i)
    {
        x = i;
        cout<<"Here alpha is intialized\n";
    }
    void show_x(void)
    {
        cout<<"Value of x is : "<<x<<"\n";
    }
};

class Beta {
    float y;
    public:
    Beta(float i)
    {
        y = i;
        cout<<"Here Beta is intialized\n";
    }
    void show_y(void)
    {
        cout<<"Value of y is :"<<y<<"\n";
    }
};

class Gamma : public alpha, public Beta
{
    int m, n;
    public:
    Gamma(int a, float b, int c, int d) : alpha(a), Beta(b)
    {
        m = c;
        n = d;
        cout<<"Gamma is intialized\n";
    }
    void show_mn(void)
    {
        cout<<"value of m is : "<<m<<"\n";
        cout<<"value of n is : "<<n<<"\n";
    }
};

int main()
{
    Gamma g(5, 10.5, 6, 7);
    g.show_x();
    g.show_y();
    g.show_mn();
    return 0;
}