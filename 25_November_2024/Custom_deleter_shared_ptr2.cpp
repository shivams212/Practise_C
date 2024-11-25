#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "MyClass constructor called\n"; }
    ~MyClass() { cout << "MyClass destructor called\n"; }
};

void customDelete(MyClass* ptr) {
    cout << "Custom delete called\n";
    delete ptr;  // Deleting the object in a custom way
}

int main() {
    shared_ptr<MyClass> ptr1(new MyClass(), customDelete);
    {
        shared_ptr<MyClass> ptr2 = ptr1;  // Sharing ownership
    }  // ptr2 goes out of scope, but ptr1 still holds the object

    // When ptr1 goes out of scope, the custom deleter will be invoked
    return 0;
}


// MyClass constructor called
// Custom delete called
// MyClass destructor called


// #include <iostream>
// #include <memory>
// using namespace std;

// class MyClass {
// public:
//     MyClass() {
//         cout << "MyClass constructor called" << endl;
//     }

//     ~MyClass() {
//         cout << "MyClass destructor called" << endl;
//     }
// };

// void myCustomDeleter(MyClass* ptr) {
//     cout << "Custom deleter called" << endl;
//     delete[] ptr; // Use delete[] for arrays
// }

// int main() {
//     // Use shared_ptr with a custom deleter for arrays
//     shared_ptr<MyClass> mySharedArray(new MyClass[3], [](MyClass* ptr) {
//         cout << "Custom deleter called" << endl;
//         delete[] ptr;
//     });

//     // Weak pointers cannot work directly with array elements in this context
//     weak_ptr<MyClass> myWeakArray(mySharedArray);

//     return 0;
// }

/*
MyClass constructor called
MyClass constructor called
MyClass constructor called

Custom deleter called
MyClass destructor called
MyClass destructor called
MyClass destructor called

*/