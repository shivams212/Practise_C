#include<iostream>
#include<memory>
using namespace std;

class MyClass {
public:
    MyClass() {cout << "MyClass constructor called" << endl; }
    ~MyClass() {cout << "MyClass destructor called" << endl; }

};

void customDelete(MyClass* ptr) {
    cout << "Custom delete called" << endl;
    delete ptr;
}

int main(){
    unique_ptr<MyClass, decltype(&customDelete)> ptr(new MyClass(), customDelete);
    
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

//     void printHello() {
//         cout << "Hello " << endl;
//     }
//     void printHello1() {
//         cout << "Hello1 " << endl;
//     }
//     void printHello2() {
//         cout << "Hello2 " << endl;
//     }
// };

// void myCustomDeleter(MyClass* ptr) {
//     cout << "Custom deleter called" << endl;
//     delete[] ptr; // Correctly delete array
// }

// int main() {
//     // Use unique_ptr with array and custom deleter
//     unique_ptr<MyClass[], decltype(&myCustomDeleter)> myUniqueArray(new MyClass[3], myCustomDeleter);

//     myUniqueArray[0].printHello();
//     myUniqueArray[1].printHello1();
//     myUniqueArray[2].printHello2();

//     // No need for weak_ptr with unique_ptr
//     return 0;
// }

// // MyClass constructor called
// // MyClass constructor called
// // MyClass constructor called
// // Hello 
// // Hello 
// // Hello 
// // Custom deleter called
// // MyClass destructor called
// // MyClass destructor called
// // MyClass destructor called

