// #include <iostream>
// #include <memory>
// #include <fstream>
// using namespace std;

// // Custom deleter for a file handle
// void fileDeleter(FILE* file) {
//     if (file) {
//         cout << "Closing file\n";
//         fclose(file);
//     }
// }

// int main() {
//     // Step 1: Open a file
//     FILE* rawFile = fopen("example.txt", "w");
//     if (!rawFile) {
//         cerr << "Failed to open file\n";
//         return 1;
//     }

//     // Step 2: Create a shared_ptr with a custom deleter
//     shared_ptr<FILE> filePtr(rawFile, fileDeleter);

//     // Step 3: Use the file
//     fprintf(filePtr.get(), "Hello, Custom Deleters!\n");

//     // Step 4: When filePtr goes out of scope, the custom deleter is called
//     return 0;
// }

// #include <iostream>
// #include <memory> // For std::unique_ptr and std::make_unique

// class MyObject {
// public:
//     MyObject(int x) : value(x) {
//         std::cout << "MyObject created with value: " << value << "\n";
//     }
//     ~MyObject() {
//         std::cout << "MyObject destroyed\n";
//     }
//     void display() const {
//         std::cout << "Value: " << value << "\n";
//     }

// private:
//     int value;
// };

// int main() {
//     // Use std::make_unique to create a unique_ptr
//     std::unique_ptr<MyObject> ptr = std::make_unique<MyObject>(42);

//     // Access the object via the unique_ptr
//     ptr->display();

//     // The unique_ptr automatically deletes the object when it goes out of scope
//     return 0;
// }


#include <iostream>
#include <memory>

class MyObject {
public:
    MyObject(int x) : value(x) {
        std::cout << "MyObject created with value: " << value << "\n";
    }
    ~MyObject() {
        std::cout << "MyObject destroyed\n";
    }
    void display() const {
        std::cout << "Value: " << value << "\n";
    }

private:
    int value;
};

int main() {
    // Create a unique_ptr
    std::unique_ptr<MyObject> ptr = std::make_unique<MyObject>(42);

    // Access the object
    ptr->display();

    // Reset the unique_ptr (destroy the current object and take new ownership)
    ptr.reset(new MyObject(99)); // Old object destroyed, new one created
    ptr->display();

    // Release ownership of the managed object
    MyObject* rawPtr = ptr.release(); // ptr is now nullptr, rawPtr takes ownership
    if (!ptr) {
        std::cout << "ptr is now nullptr\n";
    }

    // Manually delete the raw pointer
    delete rawPtr;

    return 0;
}

