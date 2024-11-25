// #include <iostream>
// #include <cstring>

// using namespace std;

// class ShallowCopy {
//     char* data;
// public:
//     ShallowCopy(const char* str) {
//         data = new char[strlen(str) + 1];
//         strcpy(data, str);
//     }
//     ~ShallowCopy() {
//         delete[] data; // Releases the memory
//     }
//     void display() const {
//         cout << "Data: " << data << "\n";
//     }
// };

// int main() {
//     ShallowCopy obj1("Hello");
//     ShallowCopy obj2 = obj1; // Default copy constructor (shallow copy)

//     obj1.display();
//     obj2.display(); // Shares the same memory as `obj1`
//     return 0; // Double deletion occurs, leading to a crash
// }


#include <iostream>
#include <cstring>

class DeepCopy {
    char* data;
public:
    DeepCopy(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    // Custom copy constructor
    DeepCopy(const DeepCopy& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    ~DeepCopy() {
        delete[] data; // Releases the memory
    }

    void display() const {
        cout << "Data: " << data << "\n";
    }
};

int main() {
    DeepCopy obj1("Hello");
    DeepCopy obj2 = obj1; // Custom copy constructor (deep copy)

    obj1.display();
    obj2.display(); // Independent copy of `obj1`
    return 0;
}