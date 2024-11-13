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

    // Move Constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        other.data = nullptr; // Release ownership of the resource
        std::cout << "Resource moved!" << std::endl;
    }

    // Move Assignment Operator
    MyClass& operator=(MyClass&& other) noexcept {
        if (this == &other) return *this; // Handle self-assignment

        delete[] data; // Free old resource
        data = other.data; // Steal the resource
        other.data = nullptr; // Release ownership of the resource
        std::cout << "Resource moved!" << std::endl;
        return *this;
    }
};

int main() {
    MyClass obj1("Hello");
    MyClass obj2 = std::move(obj1); // Move Constructor
    obj2 = std::move(obj1); // Move Assignment Operator
    return 0;
}


// Destructor: Frees the allocated memory.
// Copy Constructor: Copies the resource (deep copy).
// Copy Assignment Operator: Assigns a new resource (deep copy).
// Move Constructor: Transfers ownership of the resource without copying.
// Move Assignment Operator: Transfers ownership of the resource (similar to move constructor).