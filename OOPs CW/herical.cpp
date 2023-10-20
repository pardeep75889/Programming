#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animals make sounds." << endl;
    }
};

class Mammal : public Animal {
public:
    void birth() {
        cout << "Mammals give birth to live young." << endl;
    }
};

class Bird : public Animal {
public:
    void fly() {
        cout << "Birds can fly." << endl;
    }
};

int main() {
    Mammal cat;
    Bird sparrow;
    cat.sound();
    sparrow.sound();
    cat.birth();
    sparrow.fly();

    return 0;
}