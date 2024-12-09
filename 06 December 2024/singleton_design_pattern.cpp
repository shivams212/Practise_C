#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* ptr; // Static pointer to the single instance
    static std::mutex mtx; // Mutex for thread safety

    // Private constructor to prevent direct instantiation
    Singleton() {
        std::cout << "Singleton instance created!" << std::endl;
    }

public:
    // Static method to get the single instance
    static Singleton* getSingletonInstance() {
        std::lock_guard<std::mutex> lock(mtx); // Lock to ensure thread safety
        if (ptr == nullptr) {
            ptr = new Singleton(); // Create the singleton instance
        }
        return ptr;
    }

    // Example member function
    void myMemberFunc() {
        std::cout << "Member function of Singleton called!" << std::endl;
    }

    // Delete copy constructor and assignment operator to prevent duplication
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

// Initialize static members
Singleton* Singleton::ptr = nullptr;
std::mutex Singleton::mtx;

int main() {
    // Get the singleton instance
    Singleton* inst1 = Singleton::getSingletonInstance();
    Singleton* inst2 = Singleton::getSingletonInstance();

    // Call a member function
    inst1->myMemberFunc();

    // Verify both instances are the same
    if (inst1 == inst2) {
        std::cout << "Both instances are the same!" << std::endl;
    } else {
        std::cout << "Instances are different!" << std::endl;
    }

    return 0;
}
