#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;

    int digits=0;

    while (n>0){
        digits++;
        n = n / 10;
    }

    cout<<"No of digits : ";
    cout<<digits<<endl;
}