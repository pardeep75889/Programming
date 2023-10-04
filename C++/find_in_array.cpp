#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of elements of an array : ";
    cin>>n;
    int array[n];
    cout<<endl<<"Enter the elements of an array : ";
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    cout<<"array : ";
    for(int i = 0; i < n; i++){
        cout<<array[i]<<", ";
    }
    int key;
    cout<<endl<<endl<<"Enter the key element of an array : ";
    cin>>key;
    int ans = -1;
    for(int i = 0; i < 5; i++){
        if(array[i] == key){
            ans = i;
        }
    }
    cout<<endl<<"If given no. found in array then this is the index of element or if not found (-1) : ";
    cout<<ans<<endl<<endl;
}