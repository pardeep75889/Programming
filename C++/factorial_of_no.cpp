#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. : "; 
    cin>>n;
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    cout<<"Factorial of no. : ";
    cout<<factorial<<endl;
}