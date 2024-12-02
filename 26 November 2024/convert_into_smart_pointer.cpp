#include <iostream>
#include <memory> // For smart pointers
using namespace std;

/*
int main()
{
MyClass1 obj(10);
MyClass1 *ptr=new Myclass1[10];
obj.printvalue();
delete ptr;
return 0;
}
*/

class MyClass1 {
    int value;

public:
    MyClass1(int val) : value(val) {
        cout << "MyClass1 constructor called with value: " << value << endl;
    }

    ~MyClass1() {
        cout << "MyClass1 destructor called for value: " << value << endl;
    }

    void printValue() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Creating an object on the stack
    MyClass1 obj(10);
    obj.printValue();

    // Using unique_ptr for dynamic allocation
    unique_ptr<MyClass1[]> ptr(new MyClass1[3]{
        MyClass1(20),
        MyClass1(30),
        MyClass1(40)
    });

    // Accessing elements in the array of smart pointers
    for (int i = 0; i < 3; i++) {
        ptr[i].printValue();
    }

    // No need to call delete; unique_ptr takes care of memory management
    return 0;
}
