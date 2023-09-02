#include<iostream>
using namespace std;
int main(){
    int array[1000];
    cout<<"Enter an array[] : ";
    cin>>array[1000];
    
    cout<<"Size of an array(Bytes) : ";
    cout<<sizeof(array)<<endl;

    cout<<"Length of an array : ";
    cout<<sizeof(array)/sizeof(array[0])<<endl;

}