// Here is a simple example that demonstrates why a static function cannot access non-static members:

#include <iostream>
using namespace std;

class Example {
private:
    int instanceVar; // Non-static member variable
    static int staticVar; // Static member variable

public:
    Example(int value) : instanceVar(value) {}

    // Static function
    static void staticFunction() {
        // cout << instanceVar; // ERROR: Cannot access non-static member
        cout << "Static variable: " << staticVar << endl;
    }

    // Non-static function
    void nonStaticFunction() {
        cout << "Instance variable: " << instanceVar << endl;
        cout << "Static variable: " << staticVar << endl;
    }
};

// Definition of static variable
int Example::staticVar = 100;

int main() {
    Example obj(10);

    // Call static function
    Example::staticFunction(); // Works, accesses staticVar

    // Call non-static function
    obj.nonStaticFunction(); // Works, accesses instanceVar and staticVar

    return 0;
}
