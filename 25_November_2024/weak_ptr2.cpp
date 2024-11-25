#include <iostream>
#include <memory>
using namespace std;

class Child;

class Parent {
public:
    shared_ptr<Child> child;
    ~Parent() { cout << "Parent destroyed" << endl; }
};

class Child {
public:
    weak_ptr<Parent> parent; // Weak pointer avoids circular reference
    ~Child() { cout << "Child destroyed" << endl; }
};

int main() {
    shared_ptr<Parent> parent = make_shared<Parent>();
    shared_ptr<Child> child = make_shared<Child>();

    parent->child = child;
    child->parent = parent; // Circular dependency avoided with weak_ptr

    return 0;
}
