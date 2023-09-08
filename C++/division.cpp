#include<iostream>
using namespace std;
int main(){

    int a, b;
    
    cout<<"Enter the first no. : ";
    cin>>a;

    cout<<"Enter the second no. : ";
    cin>>b;
    
    int c = (a / b);
    cout<<"Division of two no. : ";
    cout<<c<<endl;

    int d = (a % b);
    cout<<"Remainder of these no. : ";
    cout<<d<<endl;
}