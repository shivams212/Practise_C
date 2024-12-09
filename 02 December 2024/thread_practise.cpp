//#include <iostream>
//#include <thread>
//#include <string>
//
//void printMessage(const std::string& message) {
//    std::cout << message << std::endl;
//}
//
//int main() {
//    std::thread thrd1(printMessage, "Hello from a thread!");
//    thrd1.join();  // Wait for the thread to finish
//
//    return 0;
//}

//#include <iostream>
//#include <thread>
//#include <chrono> // Include this header for high_resolution_clock
//
//using namespace std;
//using namespace chrono; // For high_resolution_clock
//
//typedef unsigned long long ull;
//
//ull OddSum = 0;
//ull EvenSum = 0;
//
//void findEven(ull start, ull end) {
//    for (ull i = start; i <= end; ++i) {
//        if ((i & 1) == 0) {
//            EvenSum += i;
//        }
//    }
//}
//
//void findOdd(ull start, ull end) {
//    for (ull i = start; i <= end; ++i) {
//        if ((i & 1) == 1) {
//            OddSum += i;
//        }
//    }
//}
//
//int main() {
//    ull start = 0, end = 1900000000;
//
//    auto startTime = high_resolution_clock::now();
//
//    //Function Pointer
//    thread t1(findEven,start,end);//running parralelly
//    thread t2(findOdd, start, end);
//
//    t1.join();
//    t2.join();
//
//    //findOdd(start, end);
//    //findEven(start, end);
//
//    auto stopTime = high_resolution_clock::now();
//
//    auto duration = duration_cast<microseconds>(stopTime - startTime);
//
//    cout << "OddSum: " << OddSum << endl;
//    cout << "EvenSum: " << EvenSum << endl;
//    cout << "Execution Time: " << duration.count()/1000000 <<"sec" << endl;
//
//    return 0;
//}



//Type of Thread Creation in C++11 
//1.)Function Pointer


#include <iostream>
#include<thread>
using namespace std;

//void fun(int x)
//{
//	while (x-- > 0)
//	{
//		cout << x << endl;
//	}
//}
//
//int main()
//{
//	thread t1(fun, 11);
//	t1.join();
//	return 0;
//}

//2 Using Lambda Function

//int main()
//{
//	thread t1([](int x)
//		{
//			while (x-- > 0)
//			{
//				cout << x << endl;
//			}
//		}, 10);
//	t1.join();
//	return 0;
//}

//3 Functor (Function Object)

//class Base
//{
//public:
//	void operator ()(int x)
//	{
//		while (x-- > 0)
//		{
//			cout << x << endl;
//		}
//}
//};
//
//int main()
//{
//	thread t((Base()), 10);//passing functor
//	t.join();
//	return 0;
//}


//in static member function we no need to call the function but in non-static we need object to call the object


//---------new video
//join() & Detach() and joinable() in c++

 
#include <iostream>
#include <thread>
#include <chrono>

// A simple function to simulate work
void joinableTask() {
    std::cout << "Joinable Thread: Starting work...\n";
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate work
    std::cout << "Joinable Thread: Work completed.\n";
}

int main() {
    // Create a joinable thread
    std::thread joinableThread(joinableTask);

    // Main thread waits for joinableThread to complete
    if (joinableThread.joinable()) {
        joinableThread.join(); // Wait for the thread to finish
    }

    std::cout << "Main thread: All work done.\n";
    return 0;
}
