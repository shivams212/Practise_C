#include <iostream>
using namespace std;

// Template for calculating Fibonacci numbers
template <unsigned int N>
class Fibonacci {
public:
    static const unsigned int value = Fibonacci<N- 1>::value + Fibonacci<N - 2>::value;
};
 
// Template specialization for Fibonacci<1> and Fibonacci<0>
template <>
class Fibonacci<1> {
public:
    static const unsigned int value = 1;
};

template <>
class Fibonacci<0> {
public:
    static const unsigned int value = 0;
};

int main() {
    cout << "Fibonacci of 5 is: " << Fibonacci<5>::value << endl;
    cout << "Fibonacci of 10 is: " << Fibonacci<10>::value << endl;
    cout << "Fibonacci of 15 is: " << Fibonacci<15>::value << endl;
    return 0;
}
