#include <iostream>
using namespace std;
class rational
{
private:
    double numerator;
    double denominator;

public:
    rational() : numerator(0), denominator(1) {}

    rational(double num, double den) : numerator(num), denominator(den) {}

    ~rational() {}

    void reduce()
    {
        double gcd = 1;
        for (int i = 1; i <= numerator && i <= denominator; ++i)
        {
            if (static_cast<int>(numerator) % i == 0 && static_cast<int>(denominator) % i == 0)
            {
                gcd = i;
            }
        }

        numerator /= gcd;
        denominator /= gcd;
    }

    rational operator+(const rational &other) const
    {
        rational result;
        result.numerator = numerator * other.denominator + other.numerator * denominator;
        result.denominator = denominator * other.denominator;
        return result;
    }

    friend istream &operator>>(istream &in, rational &obj);
    friend ostream &operator<<(ostream &out, const rational &obj);
};

istream &operator>>(istream &in, rational &obj)
{
    cout << "\nEnter the number's : \n";
    cout << "Enter numerator: ";
    cin >> obj.numerator;
    cout << "Enter denominator: ";
    cin >> obj.denominator;
    return in;
}

ostream &operator<<(ostream &out, const rational &obj)
{
    cout << obj.numerator << " / " << obj.denominator;
    return out;
}

int main()
{
    rational num1, num2, result;

    cin >> num1;
    cin >> num2;

    cout << "Reduced Rational Number 1: " << num1 <<endl;
    cout << "Reduced Rational Number 2: " << num2 <<endl;

    result = num1 + num2;
    result.reduce();
    cout << "Sum of Rational Numbers: " << result <<endl;

    return 0;
}