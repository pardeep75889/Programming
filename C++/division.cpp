#include<iostream>
using namespace std;
int main(){

    int a, b, c, d;

    cout<<"Enter the first no. : ";
    cin>>a;

    cout<<"Enter the second no. : ";
    cin>>b;
    
    c = (a / b);
    cout<<"Division of two no. : ";
    cout<<c ;

    d = (a%b);
    cout<<"\nRemainder of these no. : ";
    cout<<d;
}