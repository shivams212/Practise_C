// #include<iostream>
// #include<thread>
// using namespace std;

// void printMessage(string& message)
// {
//     cout<<message<<endl;
// }

// int main()
// {
//     thread t(printMessage,"Hello from a thread!");
//     t.join();
//     return 0;
// }

#include <iostream>
#include <thread>
#include <string>

void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}

int main() {
    std::thread thrd1(printMessage, "Hello from a thread!");
    thrd1.join();  // Wait for the thread to finish

    return 0;
}