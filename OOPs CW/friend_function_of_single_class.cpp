#include<iostream>
using namespace std;
class sample {
    int a;
    int b;
    public:
    void setvalue() {
        // a = 20;
        // b = 40;
        cout<<"Enter the first value : ";
        cin>>a;
        cout<<"Enter the second value : ";
        cin>>b;
    }
    friend float mean(sample s);
};
float mean(sample s) {
    return((s.a + s.b)/2.0);
}
int main() {
    sample x;
    x.setvalue();
    cout<<"Mean of the value is : "<<mean(x)<<"\n";
    return 0;
}