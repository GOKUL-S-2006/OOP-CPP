#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Pet {
public:
    void play() { cout << "Playing...\n"; }
};

class Dog : public Animal, public Pet {
public:
    void bark() { cout << "Barking...\n"; }
};

int main() {
    Dog d;
    d.eat();   // from Animal
    d.play();  // from Pet
    d.bark();  // Dog’s own
}
