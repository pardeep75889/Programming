#include<iostream>
using namespace std;
class ABC;  // forward decleration
class XYZ {
    int x;
    public:
    void setvalue(int i) {
        x = i;
    }
    friend void max(XYZ, ABC);
};
class ABC {
    int a;
    public:
    void setvalue(int i) {
        a = i;
    }
    friend void max(XYZ, ABC);
};
void max(XYZ m, ABC n) {
    if(m.x >= n.a)
    cout<<m.x;
    else
    cout<<n.a;
}
int main() {
    ABC p;
    XYZ q;
    int x, y;
    cout<<"Enter the first element : ";
    cin>>x;
    cout<<"Enter the second element : ";
    cin>>y;
    cout<<"Maximum element in these two elements : ";
    p.setvalue(x);
    q.setvalue(y);
    max(q, p);
    return 0;
}