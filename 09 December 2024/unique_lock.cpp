#include<iostream>
#include<thread>
#include<condition_variable>

using namespace std;

std::mutex mtx;
std::condition_variable cv;
bool ready = false;


void print(int id)
{
	cout << "Thread ID " << id << endl;
	std::unique_lock<std::mutex> lck(mtx);

	cv.wait(lck, [] {return ready; });

	cout << "Thread " << id << "is released"<<endl;
}

int main()
{
	std::thread t1(print, 10);
	std::thread t2(print, 20);

	cout << "Main thread\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));

	ready = true;
	cv.notify_all();//until here all the threads are in the lock state

	t1.join();
	t2.join();

    return 0;
}