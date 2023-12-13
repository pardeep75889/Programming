#include <iostream>
using namespace std;
struct date
{
    int d;
    int m;
    int y;
};
class hospital
{
    char name[100], dis[100];
    struct date d_adm;
    struct date d_dis;

public:
    void getdata()
    {
        cout << "Enter name of patient:";
        cin >> name;
        cout << "\nEnter name of disease:";
        cin >> dis;
        cout << "\nEnter the date of adm:";
        cin >> d_adm.d >> d_adm.m >> d_adm.y;
        cout << "Enter date of discharge:";
        cin >> d_dis.d >> d_dis.m >> d_dis.y;
    }
    void display()
    {
        cout << "Patient name:" << name << "\n";
        cout << "Date of adm:" << d_adm.d << "/" << d_adm.m << "/" << d_adm.y << "\n";
        cout << "Date of dis:" << d_dis.d << "/" << d_dis.m << "/" << d_dis.y << "\n";
    }
};
class age : public hospital
{
    int a;

public:
    void get()
    {
        cout << "Enter age:";
        cin >> a;
    }
    void put()
    {
        if (a < 12)
        {
            display();
            cout << "age:" << a;
        }
        else
            cout << "age greater than 12\n";
    }
};
int main()
{
    age a1;
    a1.getdata();
    a1.get();
    a1.put();
    a1.display();
    return 0;
}