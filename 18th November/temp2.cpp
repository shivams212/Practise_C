#include <iostream>
using namespace std;

void processLValue(int &x) {
    cout << "L-value reference: " << x << endl;
}

void processRValue(int &&x) {
    cout << "R-value reference: " << x << endl;
}

int main() {
    int a = 5;                   // `a` is an L-value

   r // processLValue(10);        // Error: cannot bind L-value reference to R-value

    processRValue(10);           // OK: 10 is an R-value
    processRValue(move(a));      // OK: `std::move(a)` converts `a` to an R-value

    // processRValue(a);         // Error: cannot bind R-value reference to L-value

    return 0;
}
