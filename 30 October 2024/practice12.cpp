#include <iostream>
using namespace std;

class myClass {
private:
    int* p;

public:
    // Default constructor
    myClass() {
        p = new int(100);
    }

    // Copy constructor (deep copy)
    myClass(const myClass &obj) {
        p = new int(*obj.p);  // Deep copy: Allocate new memory and copy value
    }

    // Shallow copy constructor
    static myClass createShallowCopy(const myClass &obj) {
        myClass temp;
        delete temp.p;        // Free the default allocated memory
        temp.p = obj.p;      // Shallow copy: Just copy the pointer
        return temp;
    }

    // Overloaded assignment operator (deep copy)
    myClass& operator=(const myClass &obj) {
        if (this != &obj) {       // Avoid self-assignment
            delete p;              // Free existing resource
            p = new int(*obj.p);   // Deep copy: Allocate new memory and copy value
        }
        return *this;
    }

    // Modify value (independence)
    void setValue(int val) {
        *p = val;
    }

    // Display details
    void details() const {
        cout << "Pointer address: " << p 
             << ", Address of pointer variable: " << &p 
             << ", Value: " << *p << endl;
    }

    // Destructor
    ~myClass() {
        cout << "Address before delete: " << p << endl;  // Print address before deletion
        delete p;  // Destructor to prevent memory leak
        cout << "Address after delete: " << p << endl;   // Print address after deletion
        p = nullptr;
        cout << "Address after nullptr: " << p << endl;  // Print address after setting nullptr
    }
};

int main() {
    cout << "Deep Copy Demonstration:\n";
    myClass obj1;
    cout << "Original object (obj1):\n";
    obj1.details();

    myClass obj2 = obj1;  // Deep copy using copy constructor
    cout << "\nDeep copied object (obj2):\n";
    obj2.details();

    obj1.setValue(200);
    cout << "\nAfter modifying obj1:\n";
    cout << "obj1:\n";
    obj1.details();
    cout << "obj2 (unaffected by obj1 change):\n";
    obj2.details();

    cout << "\nShallow Copy Demonstration:\n";
    myClass obj3;
    myClass obj4 = myClass::createShallowCopy(obj3);
    cout << "Original object (obj3):\n";
    obj3.details();
    cout << "Shallow copied object (obj4):\n";
    obj4.details();

    obj3.setValue(300);
    cout << "\nAfter modifying obj3:\n";
    cout << "obj3:\n";
    obj3.details();
    cout << "obj4 (affected by obj3 change due to shallow copy):\n";
    obj4.details();

    return 0;
}

// Deep Copy Demonstration:
// Original object (obj1):
// Pointer address: 0x23e17f85be0, Address of pointer variable: 0xa7c8dff6e8, Value: 100

// Deep copied object (obj2):
// Pointer address: 0x23e17f85b00, Address of pointer variable: 0xa7c8dff6e0, Value: 100

// After modifying obj1:
// obj1:
// Pointer address: 0x23e17f85be0, Address of pointer variable: 0xa7c8dff6e8, Value: 200
// obj2 (unaffected by obj1 change):
// Pointer address: 0x23e17f85b00, Address of pointer variable: 0xa7c8dff6e0, Value: 100

// Shallow Copy Demonstration:
// Original object (obj3):
// Pointer address: 0x23e17f85b60, Address of pointer variable: 0xa7c8dff6d8, Value: 100
// Shallow copied object (obj4):
// Pointer address: 0x23e17f85b60, Address of pointer variable: 0xa7c8dff6d0, Value: 100

// After modifying obj3:
// obj3:
// Pointer address: 0x23e17f85b60, Address of pointer variable: 0xa7c8dff6d8, Value: 300
// obj4 (affected by obj3 change due to shallow copy):
// Pointer address: 0x23e17f85b60, Address of pointer variable: 0xa7c8dff6d0, Value: 300
// Address before delete: 0x23e17f85b60
// Address after delete: 0x23e17f85b60
// Address after nullptr: 0
// Address before delete: 0x23e17f85b60



// Deep Copy:

// In deep copying, the class creates a new memory allocation for the pointer member p each time an object is copied.
// The copy constructor (myClass(const myClass &obj)) and overloaded assignment operator (operator=) both implement deep copy by allocating new memory and copying the value of the original object.
// As a result, changes made to one object do not affect the other, as both objects have independent copies of the data.
// Shallow Copy:

// Shallow copying is implemented using a static function createShallowCopy, which creates a new object without allocating new memory for p.
// Instead, obj4.p just points to the same memory as obj3.p.
// This means that any change in one object's data will affect the other since they share the same memory address.