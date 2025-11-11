#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Mammal : public Animal {
public:
    void walk() { cout << "Walking...\n"; }
};

class Dog : public Mammal {
public:
    void bark() { cout << "Barking...\n"; }
};

int main() {
    Dog d;
    d.eat();   // from Animal
    d.walk();  // from Mammal
    d.bark();  // from Dog
}
