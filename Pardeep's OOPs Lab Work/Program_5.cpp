#include <iostream>
using namespace std;
class Tollbooth
{
    int car;
    double amt;

public:
    Tollbooth()
    {
        this->car = 0;
        this->amt = 0;
    }
    void payingCar()
    {
        this->car++;
        this->amt += 0.50;
    }
    void non_payingCar()
    {
        this->car++;
    }
    void Display()
    {
        cout << "No of cars:" << car << "\n";
        cout << "Amount:" << amt << "\n";
    }
};
int main()
{
    char c = 'y';
    int ch;
    Tollbooth t;
    do
    {
        cout << "1 for paying"
             << "\n";
        cout << "2 for non_paying"
             << "\n";
        cout << "3 for Display/Exit"
             << "\n";
        cout << "Enter Choice \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            t.payingCar();
            cout << "Car Added"
                 << "\n";
            break;
        case 2:
            t.non_payingCar();
            cout << "Car Added"
                 << "\n";
            break;
        case 3:
            t.Display();
            c = 'n';
            break;
        }
        if (c == 'y' || c == 'Y')
        {
            cout << "\n DO you want to continue";
            cin >> c;
        }
    } while (c == 'y' || c == 'Y');
    return 0;
}