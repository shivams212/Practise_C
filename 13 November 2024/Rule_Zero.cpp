#include <iostream>
#include <memory>

class Resource {
public:
    Resource() {
        std::cout << "Resource acquired!" << std::endl;
    }
    
    ~Resource() {
        std::cout << "Resource released!" << std::endl;
    }
};

class MyClass {
private:
    std::unique_ptr<Resource> resource; // Automatically handles resource management

public:
    MyClass() : resource(std::make_unique<Resource>()) {}
    // No need to manually write a destructor, copy constructor, or copy assignment operator
};

int main() {
    {
        MyClass obj; // Resource acquired when obj is created, released when obj goes out of scope
    } // Automatic cleanup
    return 0;
}
