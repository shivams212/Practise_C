// Code Using std::future and std::async

#include <iostream>
#include <future>
#include <chrono>
#include <thread>
using namespace std;

int add_fut(int a, int b) {
    // Simulates a time-consuming operation
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return a + b;
}

int main() {
    // Asynchronously execute the add_fut function
    std::future<int> result = std::async(std::launch::async, add_fut, 10, 20);

    // Main thread continues execution
    cout << "Main thread is doing something big working...\n";

    // Retrieve the result of the asynchronous function
    int added = result.get(); // Blocks until the async task is complete

    cout << "Value of added: " << added << endl;

    return 0;
}
