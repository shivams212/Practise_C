#include <iostream>
using namespace std;

// Base class
class Animal {
public:
     virtual void makeSound() { // Virtual function
        cout << "Animal makes a sound!" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void makeSound()  { // Function overriding
        cout << "Dog barks!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void makeSound()  { // Function overriding
        cout << "Cat meows!" << endl;
    }
};

int main() {
    Animal* animal; // Pointer to base class

    Dog dog;
    Cat cat;

    // Base class pointer points to Dog
    animal = &dog;
    animal->makeSound(); // Calls Dog's overridden method

    // Base class pointer points to Cat
    animal = &cat;
    animal->makeSound(); // Calls Cat's overridden method

    return 0;
}
