#include <iostream>
#include <thread>
#include <chrono>

void backgroundTask() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task completed" << std::endl;
}

int main() {
    std::thread t(backgroundTask);
    t.detach(); // Detach the thread
    std::cout << "Main thread continues..." << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 0; // The detached thread completes even after main() exits
}

