#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. : ";
    cin>>n;
    int sum=0;
    while(n>0){
        int lastdigit = n%10;
        sum+=lastdigit;
        n/=10;
    }
    cout<<"Sum of the digits of no. : ";
    cout<<sum<<endl;
}