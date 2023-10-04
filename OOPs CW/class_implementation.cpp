#include<iostream>
using namespace std;
class item // creating class 
{
    private:
    int number;
    float cost;
    public:
    void getdata(int a, float b)
    {
        number = a;
        cost = b;
    }
    void putdata(void)
    {
        cout<<"number : "<<number<<"\n";
        cout<<"cost : "<<cost<<"\n";
    }
};
int main()
{
    item x;
    int m;
    float n;
    cout<<"Enter the number : ";
    cin>>m;
    cout<<"Enter the cost : ";
    cin>>n;
    x.getdata(m,n);
    x.putdata();
    return 0;
}