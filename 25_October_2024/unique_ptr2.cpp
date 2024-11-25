// #include <iostream>
// #include <memory>


// using namespace std;

// class MyClass {
// public:
//     MyClass() { cout << "MyClass constructor called" << endl; }
//     ~MyClass() { cout << "MyClass destructor called" << endl; }
//     void display() { cout << "Hello from MyClass!" << endl; }
// };

// int main() {
//     unique_ptr<MyClass> ptr = make_unique<MyClass>();
//     ptr->display(); // Accessing the object
//     // Destructor called automatically when ptr goes out of scope
//     return 0;
// }


// MyClass constructor called
// Hello from MyClass!
// MyClass destructor called

#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int[]> arrayPtr = make_unique<int[]>(5);
    for (int i = 0; i < 5; ++i) {
        arrayPtr[i] = i * 10;
    }
    for (int i = 0; i < 5; ++i) {
        cout << arrayPtr[i] << " ";
    }
    cout << endl;
    // Destructor automatically cleans up the array
    return 0;
}
