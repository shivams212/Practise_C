#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;   // Pointer to the Singleton instance
    static std::mutex mtx;        // Mutex for thread safety

    // Private constructor to prevent instantiation
    Singleton() {
        std::cout << "Singleton instance created.\n";
    }

    // Destructor (private to prevent accidental deletion)
    ~Singleton() {
        std::cout << "Singleton instance destroyed.\n";
    }

public:
    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Public method to get the Singleton instance
    static Singleton* getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Method to explicitly destroy the Singleton instance
    static void destroyInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (instance != nullptr) {
            delete instance;
            instance = nullptr;
        }
    }

    // Example method
    void doSomething() {
        std::cout << "Doing something with Singleton instance.\n";
    }
};

// Initialize static members
Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mtx;

int main() {
    // Get and use Singleton instance
    Singleton* singleton = Singleton::getInstance();
    singleton->doSomething();

    // Explicitly destroy the Singleton instance
    Singleton::destroyInstance();

    return 0;
}
