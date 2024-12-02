#include <iostream>
using namespace std;

int main() {
    // Recursive lambda to compute factorial
    function<int(int)> factorial = [&](int n) -> int {
        if (n == 0) return 1;
        return n * factorial(n - 1);
    };
 
    cout << "Factorial of 5: " << factorial(5) << endl;  // Output: 120
    return 0;
}