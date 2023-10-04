#include<iostream>
using namespace std;
class integer
{
    int m, n;
    public:
    integer(int , int );
    void display (void)
    {
        cout<<"m is : "<<m<<"\n";
        cout<<"n is : "<<n<<"\n";
    }
};
integer::integer(int x, int y)
{
    m = x;
    n = y;
}
int main()
{
    integer int1(0, 50);
    integer int2(2,10);
    cout<<"Object 1 has "<<"\n";
    int1.display();
    cout<<"Object 2 has "<<"\n";
    int2.display();
    return 0;
}