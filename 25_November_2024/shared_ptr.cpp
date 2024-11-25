#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "MyClass constructor called" << endl; }
    ~MyClass() { cout << "MyClass destructor called" << endl; }
};

int main() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>();
    {
        shared_ptr<MyClass> ptr2 = ptr1; // Shared ownership
        cout << "Shared ownership count: " << ptr1.use_count() << endl;
    }
    cout << "Shared ownership count after ptr2 is destroyed: " << ptr1.use_count() << endl;
    return 0;
}


// MyClass constructor called
// Shared ownership count: 2
// Shared ownership count after ptr2 is destroyed: 1
// MyClass destructor called