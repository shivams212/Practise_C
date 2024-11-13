// The Rule of Three states that if you define any of the following three special functions in a class, you should define all three:

// Destructor
// Copy Constructor
// Copy Assignment Operator

#include <iostream>
#include <cstring>

class MyClass {
private:
    char* data; // Raw pointer for resource management

public:
    MyClass(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
        std::cout << "Resource acquired!" << std::endl;
    }

    ~MyClass() {
        delete[] data; // Resource released
        std::cout << "Resource released!" << std::endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Resource copied!" << std::endl;
    }

    // Copy Assignment Operator
    MyClass& operator=(const MyClass& other) {
        if (this == &other) return *this; // Handle self-assignment

        delete[] data; // Free old resource
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
        std::cout << "Resource assigned!" << std::endl;
        return *this;
    }
};

int main() {
    MyClass obj1("Hello");
    MyClass obj2 = obj1; // Copy Constructor
    obj2 = obj1; // Copy Assignment Operator
    return 0;
}
