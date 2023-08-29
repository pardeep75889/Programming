#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of series elements : "; // series is 1-2+3-4.....n
    cin>>n;
    int sum = 0;
    for(int i = 0; i <= n; i++ ){
        if(i%2==0){
            sum-=i;
        }
        else{
            sum+=i;
        }
    }
    cout<<"Sum of series(1-2+3-4....n) : ";
    cout<<sum;
}