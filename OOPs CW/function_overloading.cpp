#include<iostream>
using namespace std;
int volune(int);
double volume(double, int);
long volume(long, int , int);
int volume(int s)
{
    return(s*s*s);
}
double volume(double r, int h)
{
    return(3.14*r*r*h);
}
long volume(long l, int b, int h)
{
    return(l*b*h);
}
int main()
{
    cout<<volume(5)<<"\n";
    cout<<volume(3.5, 2,4)<<"\n";
    cout<<volume(4.2, 5)<<"\n";
}