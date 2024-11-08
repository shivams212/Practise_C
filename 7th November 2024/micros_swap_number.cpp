#include <iostream>
using namespace std;

// Macro to swap two integers
#define SWAP(a, b)  { \
    int temp=  b ;       \
    b =  a;          \
    a = temp;          \
} 

int main() {
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    SWAP(x, y); // Swapping using the macro

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
