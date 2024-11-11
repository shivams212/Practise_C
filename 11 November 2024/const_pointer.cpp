#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    //1. Pointer to a Constant
    //How to read :->const int *ptrToConst = &a -> ptrToConst is a pointer pointing to constant integer
    const int *ptrToConst = &a;  
    cout << "Pointer to a Constant: " << *ptrToConst << endl;
    // *ptrToConst = 15; // Error: Cannot modify the value

    ptrToConst = &b; // OK: Pointer can point to another variable
    cout << "Pointer to a Constant after change: " << *ptrToConst << endl;

    // 2. Constant Pointer
    //How to read :->int* const constPt ->constPtr is a constant pointer pointing to integer
    int* const constPtr = &a; // Constant pointer
    cout << "Constant Pointer: " << *constPtr << endl;
    *constPtr = 30; // OK: Value can be modified 
    // constPtr = &b; // Error: Cannot change the address stored in the pointer because constPtr is constant
    cout << "Constant Pointer after modifying value: " << *constPtr << endl;

    // 3. Constant Pointer to a Constant
    //How to read :->const int *const constPtrToConst-> constPtrToConst is a constant pointer pointing to constant integer
    const int *const constPtrToConst = &a; // Constant pointer to a constant
    cout << "Constant Pointer to a Constant: " << *constPtrToConst << endl;
    // *constPtrToConst = 40; // Error: Cannot modify the value
    // constPtrToConst = &b; // Error: Cannot change the pointer address

    // 4. Constant Variable
    const int constVar = 50; // Constant variable
    cout << "Constant Variable: " << constVar << endl;
    // constVar = 60; // Error: Cannot modify a constant variable

    return 0;
}
