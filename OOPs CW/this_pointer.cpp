#include<iostream>
#include<cstring>
using namespace std;
class person
{
    char name[20];
    float age;
    public:
    person(char *s, float a)
    {
        strcpy(name, s);
        age = a;
    }
    person & person :: greater (person & x)
    {
        if(x.age >= age)
        return x;
        else
        return *this;
    }
    void display(void)
    {
        cout<<"The name of the person is : "<<name<<"\n";
        cout<<"Age of person is : "<<age<<"\n";
    }
};
int main()
{
    person  p1("John", 30.5),
            p2("Ahmad", 20.8),
            p3("Raju", 40.3);
    person P = p1.greater(p3);
    cout<<"Elder of p1 and p2 is : \n";
    P.display();
    P = p1.greater(p2);
    cout<<"Elder of p1 and p2 is : \n";
    P.display();
    return 0;
}