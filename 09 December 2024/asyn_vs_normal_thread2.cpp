// Code Without std::future and std::async (Using std::thread)

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
using namespace std;

int result; // Shared variable to store the result
std::mutex mtx; // Mutex to synchronize access to the shared variable

void add_fut(int a, int b) {
    // Simulates a time-consuming operation
    std::this_thread::sleep_for(std::chrono::seconds(5));
    
    // Lock before modifying the shared variable
    std::lock_guard<std::mutex> lock(mtx);
    result = a + b;
}

int main() {
    // Create a thread to execute the add_fut function
    std::thread t(add_fut, 10, 20);

    // Main thread continues execution
    cout << "Main thread is doing something big working...\n";

    // Wait for the worker thread to complete
    t.join(); // Ensures add_fut finishes before accessing the result

    // Lock before accessing the shared variable
    std::lock_guard<std::mutex> lock(mtx);
    cout << "Value of added: " << result << endl;

    return 0;
}

