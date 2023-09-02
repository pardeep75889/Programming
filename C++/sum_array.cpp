#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements of an array : ";
    cin>>n;
    int array[n];
    cout<<"Enter the elements of an array : ";
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    cout<<"array : ";
    for(int i = 0; i < n; i++){
        cout<<array[i]<<", ";
    }
}