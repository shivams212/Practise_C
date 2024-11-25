#include<iostream>
using namespace std;

    template<typename T>
    T sum(T value)
    {
        return value;//Base
    }

    template<typename T,typename...Args>
    T sum(T first,Args...rest)
    {
        return first+sum(rest...);//Recursive expansion
    }


int main()
{

    cout<<"Sum of 1,2,3: "<<sum(1,2,3)<<endl;
    cout<<"Sum of 1.1,1.2,1.3: "<<sum(1.1,1.2,1.3)<<endl;
    cout<<"Sum of 10: "<<sum(10);


    return 0;
}

// #include <iostream>
// using namespace std;

// // Base case: Single argument
// void print() {
//     cout << "No more arguments to print.\n";
// }

// // Variadic template
// template<typename T, typename... Args>
// void print(T first, Args... args) {
//     cout << first << " ";
//     print(args...); // Recursive call with remaining arguments
// }

// int main() {
//     print(1, 2.5, "Hello", 'A'); // Passing different types
//     return 0;
// }


// #include <iostream>
// using namespace std;

// template<typename... Args>
// class Tuple; // Generic Tuple class

// template<typename T, typename... Args>
// class Tuple<T, Args...> : public Tuple<Args...> {
//     T value;
// public:
//     Tuple(T v, Args... args) : Tuple<Args...>(args...), value(v) {}
    
//     T getValue() const { return value; }
// };

// template<>
// class Tuple<> {};

// int main() {
//     Tuple<int, double, string> myTuple(1, 2.5, "Hello");
//     cout << myTuple.getValue() << endl; // Access first element
//     return 0;
// }
