#include<iostream>
using namespace std;

class Example {
private:
    int privateVar; // Only accessible within the class

    void privateMethod() {
        // This method is also only accessible within the class
    }
};

// class Example2 {
// public:
//     int publicVar; // Accessible from outside the class

//     void publicMethod() {
//         // This method is also accessible from outside the class
//         cout<<"Public Method";
//     }
// };

// class Base {
// protected:
//     int protectedVar; // Accessible within the class and derived classes

//     void protectedMethod() {
//         // Accessible within the class and derived classes
//         cout<<endl<<"Protected Method ";
//     }
// };

// class Derived : public Base {
// public:
//     void accessBaseMember() {
//         protectedVar = 5; // Allowed because `protectedVar` is inherited
//         cout<<"Inherited Protected function we are accessing";

//     protectedMethod();
        
//     }

// };


int main()
{
    // Example obj;
    // // obj.privateMethod
    // Example2 obj2;
    // // obj2.publicMethod();
    // Derived obj3;
    // obj3.accessBaseMember();
    // Base obj4;
   
return 0;
}