#include <iostream>
#include <functional>

using namespace std;

// Function to calculate the square of a number
int square(int x) {
    return x * x;
}

// Lambda function generator
auto fun1(int arg) {
    return [arg](int n) -> int {
        return n * arg;
    };
}

// Main function for demonstrating recursive lambda and square functionality
void testFunctionalities() {
    // Recursive lambda to compute factorial
    std::function<int(int)> factorial = [&](int n) -> int {
        if (n == 0) return 1;
        return n * factorial(n - 1);
    };

    // Demonstrating a function assigned to a std::function object
    std::function<int(int)> ssss = square;

    // Factorial computation
    std::cout << "Factorial of 5: " << factorial(5) << std::endl; // Output: 120

    // Square computation
    std::cout << "Square of 4: " << ssss(4) << std::endl;         // Output: 16
}

// Class A1 demonstration
class A1 {
    int m;
public:
    A1() : m(0) {
        cout << "Constructor called.\n";
    }

    void increment() {
        m++;
    }

    void print() {
        cout << "Value of m: " << m << endl;
    }
};

// Function that accepts an A1 object by value
void funA1(A1 obj) {
    obj.increment();
    obj.increment();
    obj.increment();
}

int main() {
    // Testing functional programming with lambdas and std::function
    testFunctionalities();

    // Testing class and function behavior
    A1 o;
    funA1(o); // Pass object by value, so changes do not affect the original object

    // Original object remains unchanged
    o.print(); // Output: Value of m: 0

    return 0;
}
