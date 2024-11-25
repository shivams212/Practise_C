// #include<iostream>
// using namespace std;
// int main()
// {
// int x = 10;       // `x` is an L-value
// int &ref = x;     // L-value reference to `x`
// ref = 20;         // Modifies `x`, as `ref` refers to `x`
// cout << x<<endl;        // Outputs 20

// cout<<"----------------------\n";
// int&& rref = 10;  // R-value reference to the temporary literal 10
// cout << rref<<endl;     // Outputs 10

// // Modifying an R-value reference
// rref = 20;        // Allowed; modifies the temporary storage
// cout << rref<<endl;     // Outputs 20

// return 0;
// }


#include <iostream>
#include <utility> // for std::move
using namespace std;

void processLValue(int& x) {
    cout << "L-value reference: " << x << endl;
}

void processRValue(int&& x) {
    cout << "R-value reference: " << x << endl;
}

int main() {
    int a = 5;                   // `a` is an L-value

    processLValue(a);            // OK: `a` is an L-value

    // processLValue(10);        // Error: Cannot bind L-value reference to R-value
    processRValue(10);           // OK: 10 is an R-value

    processRValue(std::move(a)); // OK: `std::move(a)` converts `a` to an R-value
    // processRValue(a);         // Error: Cannot bind R-value reference to L-value

    return 0;
}

// L-value reference: 5
// R-value reference: 10
// R-value reference: 5