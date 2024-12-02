//#
// 
//include<iostream>
//using namespace std;
//void func()
//{
//	for (int i = 0; i < 1000000; i++)
//	{
//		cout << "hey\n";
//		int* a = new int(10);
//		//delete a;
//	}
//}
//int main()
//{
//	func();
//	return 0;
//}

//RAII
//#include<iostream>
//#include<memory>
//using namespace std;
//
//class Wrapper
//{
//private:
//	int* mem;
//public:
//	Wrapper(int* a) :mem(a) {
//		cout << "Inside Constructor\n";
//	}
//	~Wrapper()
//	{
//		cout << "Destrctor\n";
//		delete mem;
//	}
//};
//
//int main()
//{
//	Wrapper obj(new int(10));
//	return 0;
//}


//#include<iostream>
//#include<memory>
//using namespace std;
//int main()
//{
//	unique_ptr<int>unPtr1 = make_unique<int>(25);
//	unique_ptr<int>unPtr2 = move(unPtr1);//we cann't share unique ptr, and we can move ownership of unique_ptr
//	//cout << *unPtr1;
//	cout << *unPtr2;
//
//}

#include<iostream>
#include<memory>
using namespace std;

class MyClass
{
public:
	MyClass()
	{
		cout << "Constructor invoked" << endl;
	}
	~MyClass()
	{
		cout << "Destructor called" << endl;
	}

};

int main()
{
	//unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
	
	/*	shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
		cout << "Share Count: " << shPtr1.use_count() << endl;
	
	{
		shared_ptr<MyClass>shPtr2 = shPtr1;
		cout << "Share Count: " << shPtr1.use_count() << endl;
	}
	cout << "Share Count: " << shPtr1.use_count() << endl;*/

	weak_ptr<int> wePtr1;
	{
		shared_ptr<int>shPtr1 = make_shared<int>(25);
		wePtr1 = shPtr1;
	}


}