
// #include <mutex>
// #include <thread>
// using namespace std;

// int glbvar = 0;
// std::mutex mtx;
// void threadfun()
// {
// 	cout << "this is thread fun\n";
// 	for (int i = 1; i <= 10000; i++)
// 	{
// 	mtx.lock();
// 		glbvar = i;
// 		if (i > 500) return;
// 		cout << "thread " << i << endl;
// 	mtx.unlock();
// 	}
// }
 
// void main()
// {
// 		std::thread thrd1(threadfun);
// 		std::thread thrd2(threadfun);
 
// 		thrd1.join();
// 		thrd2.join();
 
// 	return 0;
// }

#include <iostream>  // For std::cout and std::endl
#include <mutex>     // For std::mutex
#include <thread>    // For std::thread


int glbvar = 0;  // Global variable
std::mutex mtx;  // Mutex for synchronization

void threadfun() {
    std::cout << "This is thread function\n";
    for (int i = 1; i <= 10000; i++) {
        std::lock_guard<std::mutex> lock(mtx);  // Automatically unlocks when going out of scope
        glbvar = i;
        if (i > 500) return;  // Exit early if condition is met
        std::cout << "Thread " << i << std::endl;
    }
}

int main() {
    std::thread thrd1(threadfun);  // Create thread 1
    std::thread thrd2(threadfun);  // Create thread 2

    thrd1.join();  // Wait for thread 1 to finish
    thrd2.join();  // Wait for thread 2 to finish

    return 0;  // Indicate successful execution
}
