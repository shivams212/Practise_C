// #include<iostream>
// // #include<math.h>
// using namespace std;

// template<unsigned int n>
// struct Factorial {
//     static const unsigned int value =n* Factorial<n-1>::value;
// };

// template<>
// struct Factorial<0>{
//     static const unsigned int value=1;
// };

// int main()
// {
//     cout<<"Factorial of 5 is : "<<Factorial<5>:: value<<endl;
//     return 0;
// }


//Implement that above code with class
#include <iostream>
using namespace std;

// Class for calculating factorial
template <unsigned int N>
class Factorial {
public:
    static const unsigned int value = N * Factorial<N - 1>::value;
};

// Template specialization for the base case (Factorial<0>)
template <>
class Factorial<0> {
public:
    static const unsigned int value = 1;
};

int main() {
    cout << "Factorial of 5 is: " << Factorial<5>::value << endl;
    return 0;
}
