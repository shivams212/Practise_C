// #include <iostream>
// #include <initializer_list>
// using namespace std;

// class MyCls
// {
//     int m[10]; // Fixed-size array to store elements
//     int size;  // Number of elements initialized

// public:
//     // Constructor with initializer_list
//     MyCls(initializer_list<int> list) : size(list.size())
//     {
//         int i = 0;
//         for (int value : list)
//         {
//             if (i < 10)
//             { // Ensure no overflow
//                 m[i++] = value;
//             }
//         }
//     }

//     void display() const
//     {
//         for (int i = 0; i < size && i < 10; i++)
//         {
//             cout << m[i] << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     MyCls obj{1, 2, 3, 4, 5};                      // Initialize with 5 elements
//     MyCls obj2{10, 20, 30, 40, 50};                // Initialize with 5 more elements
//     MyCls obj3{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}; // Exceeding array size

//     cout << "Object 1: ";
//     obj.display(); // Output: 1 2 3 4 5

//     cout << "Object 2: ";
//     obj2.display(); // Output: 10 20 30 40 50

//     cout << "Object 3: ";
//     obj3.display(); // Output: 1 2 3 4 5 6 7 8 9 10 (ignores 11)

//     return 0;
// }


#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class DynamicArray {
    vector<int> data; // Dynamic storage

public:
    // Constructor with initializer_list
    DynamicArray(initializer_list<int> list) {
        for (int value : list) {
            data.push_back(value); // Add values to the vector
        }
    }

    void display() const {
        for (int value : data) {
            cout << value << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray arr1{1, 2, 3, 4, 5};
    DynamicArray arr2{10, 20, 30};

    cout << "DynamicArray 1: ";
    arr1.display(); // Output: 1 2 3 4 5

    cout << "DynamicArray 2: ";
    arr2.display(); // Output: 10 20 30

    return 0;
}
