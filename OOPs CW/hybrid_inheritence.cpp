#include<iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "The roll number of the student : " << roll_number << "\n";
    }
};

class test : public student
{
protected:
    float p1, p2;
public:
    void get_marks(float x, float y)
    {
        p1 = x;
        p2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks are:\n";
        cout << "p1 marks are : " << p1 << "\n";
        cout << "p2 marks are : " << p2 << "\n";
    }
};

class sports
{
protected:
    float score;
public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "The sports marks are : " << score << "\n";
    }
};

class result : public test, public sports
{
private:
    float total;
public:
    void display(void)
    {
        total = p1 + p2 + score;
        put_number();
        put_marks();
        put_score();
        cout << "The total marks are : " << total << "\n";
    }
};

int main()
{
    result s1;
    s1.get_number(45);
    s1.get_marks(80.5, 72.5);
    s1.get_score(85.8);
    s1.display();
    return 0;
}