#include<future>
 
int add_fut(int a, int b)
{
	// this is big funciton, taking more time to complete...
	std::this_thread::sleep_for(std::chrono::seconds(5));
 
	return a + b;
}
 
int main()
{
	std::future<int> result = std::async (std::launch::async, add_fut, 10, 20);
 
	cout << "Main thread is doing something big working...\n";
 
	int added = result.get();
 
	cout << "value of added " << added << endl;
 
	return 0;
}