#include <iostream>
using namespace std;
class Employee
{
protected:
    char nm[30];
    int sal;
};
class manager : public Employee
{
protected:
    char dept[10];

public:
    void input();
    void display();
};
void manager::input()
{
    cout << "Enter Name:"
         << "\n";
    cin >> nm;
    cout << "Enter Department:"
         << "\n";
    cin >> dept;
    cout << "Enter Salary:"
         << "\n";
    cin >> sal;
}
void manager::display()
{
    cout << "Manager's Name:" << nm << "\n";
    cout << "Salary:" << sal << "\n";
    cout << "Department:" << dept << "\n";
}
class executive : public manager
{
public:
    void display(manager);
};
void executive::display(manager m)
{
    cout << "Executive:"<< "\n";
    m.display();
}
int main()
{
    manager m1;
    m1.input();
    executive e;
    m1.display();
    e.display(m1);
    return 0;
}