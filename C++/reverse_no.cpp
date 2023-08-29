#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no.: ";
    cin>>n;
    int reverse = 0;
    while(n>0){
        int lastdigit = n%10;
        reverse = reverse * 10 + lastdigit;
        n/=10;
    }
    cout<<"Reverse of no. : ";
    cout<<reverse;
}