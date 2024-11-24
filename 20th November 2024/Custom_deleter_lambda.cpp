#include <iostream>
#include <memory>
using namespace std;

struct Resource {
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
};

void customDeleter(int* ptr) {
    std::cout << "Custom deleter for int* called\n";
    delete ptr;
}

int main() {
    std::unique_ptr<Resource, std::function<void(Resource*)>> ptr(
        new Resource, 
        [](Resource* res) {
            std::cout << "Custom deleter called\n";
            delete res;
        });

    cout<<endl;
    
    shared_ptr<int> sp(new int(42), customDeleter);
    return 0; // The custom deleter is invoked here
}
