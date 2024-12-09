#include <iostream>
#include <memory>
#include <mutex>

class Singleton {
private:
    static std::unique_ptr<Singleton> instance;
    static std::mutex mtx;

    // Private constructor
    Singleton() {
        std::cout << "Singleton instance created.\n";
    }

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Public method to get the Singleton instance
    static Singleton* getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (instance == nullptr) {
            instance.reset(new Singleton());
        }
        return instance.get();
    }

    // Example method
    void doSomething() {
        std::cout << "Doing something with Singleton instance.\n";
    }
};

// Initialize static members
std::unique_ptr<Singleton> Singleton::instance = nullptr;
std::mutex Singleton::mtx;

int main() {
    // Get and use Singleton instance
    Singleton* singleton = Singleton::getInstance();
    singleton->doSomething();

    // No need for explicit cleanup; unique_ptr handles it
    return 0;
}
