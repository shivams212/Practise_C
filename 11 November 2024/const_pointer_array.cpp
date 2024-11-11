#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30};
    int *modifiablePtr = arr;       // Modifiable pointer for demonstration
    const int *ptrToConst = arr;    // Pointer to a constant
    int *const constPtr = arr;      // Constant pointer
    const int *const constPtrToConst = arr; // Constant pointer to a constant

    // 1. Pointer to a Constant -> const int *ptrToConst = arr;
    cout << "Pointer to a Constant:" << endl;
    cout << "Value pointed by ptrToConst: " << *ptrToConst << endl;
    // *ptrToConst = 25; // Error: Cannot modify the value pointed to
    ptrToConst = &arr[1]; // OK: Pointer can point to another array element
    cout << "Value pointed by ptrToConst after change: " << *ptrToConst << endl;

    // 2. Constant Pointer -> int *const constPtr = arr;
    cout << "\nConstant Pointer:" << endl;
    cout << "Value pointed by constPtr: " << *constPtr << endl;
    *constPtr = 35; // OK: Value can be modified
    // constPtr = &arr[1]; // Error: Cannot change the address stored in the pointer
    cout << "Value pointed by constPtr after modifying value: " << *constPtr << endl;

    // 3. Constant Pointer to a Constant ->Constant pointer to a constant
    cout << "\nConstant Pointer to a Constant:" << endl;
    cout << "Value pointed by constPtrToConst: " << *constPtrToConst << endl;
    // *constPtrToConst = 40; // Error: Cannot modify the value
    // constPtrToConst = &arr[1]; // Error: Cannot change the pointer address

    // 4. Modifiable Pointer for Reference ->Modifiable pointer for demonstration
    cout << "\nModifiable Pointer:" << endl;
    cout << "Value pointed by modifiablePtr: " << *modifiablePtr << endl;
    *modifiablePtr = 45; // OK: Value can be modified
    modifiablePtr = &arr[2]; // OK: Pointer can point to another array element
    cout << "Value pointed by modifiablePtr after changes: " << *modifiablePtr << endl;

    return 0;
}
