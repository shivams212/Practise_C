#include <iostream>
#include <string>

class Animal {
public:
    void eat() {
        std::cout << "This animal eats food." << std::endl;
    }
};

class Dog : public Animal { // Dog "is an" Animal
public:
    void bark() {
        std::cout << "The dog barks." << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.bark(); // Specific to Dog
    return 0;
}
