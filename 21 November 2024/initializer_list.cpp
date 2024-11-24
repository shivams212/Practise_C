// std::initializer_list is a standard library feature introduced in C++11. It is a lightweight proxy object that allows you to pass a list of values to a function or constructor. It is commonly used to initialize containers or objects with a variable number of elements.

#include<iostream>
using namespace std;

//Below printList function we have define Initiliazer List
// void printList(initializer_list<int>list)
// {
//     for(int i:list)
//     {
//         cout<<i<<" ";
//     }
//     cout<<"\n";
// }
// int main()
// {
//     printList({1,2,3,4,5});
//     return 0;
// }

// Usage in Classes
// std::initializer_list is commonly used in class constructors to initialize objects with multiple values.

#include <initializer_list>
#include <iostream>
#include <vector>

class MyClass {
    std::vector<int> data;

public:
    // Constructor accepting an initializer_list
    MyClass(std::initializer_list<int> list) : data(list) {}

    void printData() {
        for (int value : data) {
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    MyClass obj = {10, 20, 30, 40, 50};  // Initialize using initializer_list
    obj.printData();

    return 0;
}
