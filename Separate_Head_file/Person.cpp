#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(const string& name) : name(name) {}

void Person::display() const {
    cout << "Name: " << name << endl;
}
