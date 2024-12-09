#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void safeFunction() {
    std::lock_guard<std::mutex> guard(mtx); // Lock the mutex
    // Critical section
    std::cout << "Thread-safe operation" << std::endl;
    // Mutex is automatically unlocked when 'guard' goes out of scope
}

int main() {
    std::thread t1(safeFunction);
    std::thread t2(safeFunction);

    t1.join();
    t2.join();
    return 0;
}
