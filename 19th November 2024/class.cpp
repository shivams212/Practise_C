'#include<iostream>
using namespace std;

int iCounter = 0;
void errorfun()
{
	throw 1;
}
void myfun()
{
	iCounter++;
	int *ptr = new int;
	*ptr = 5;
	if (iCounter % 2 == 0)
		errorfun();
	delete ptr;
}
 
void maindjkd()
{
	try
	{
		myfun();// here
		myfun();
		myfun();//here
		myfun();
		myfun(); // here
	}
	catch (...)
	{
 
	}
}
 
void fff(unique_ptr<int> ptr2)
{
 
}
 
class mmmmm
{
public:
	mmmmm()
	{
		cout << "mm const\n";
	}
	~mmmmm()
	{
		cout << "mm dest\n";
	}
};
void fff(shared_ptr<mmmmm> p)
{
	//cout << *p << endl;
}
void main()
{
	unique_ptr<int> ptr;
	unique_ptr<int> ptr2;
 
	ptr = make_unique<int>();
 
	*ptr = 44;
 
	ptr2 = std::move(ptr);
	fff(std::move(ptr2));
 
	shared_ptr<mmmmm> pp;
	pp = make_shared<mmmmm>();
	//*pp = 455;
	fff(pp);
 
	weak_ptr<mmmmm> wp;
 
}
 
class Student;
class Teacher
{
public:
	shared_ptr<Student> s;
	void setStudent(shared_ptr<Student> s1)
	{
		s = s1;
	}
};
 
class Student
{
public:
	weak_ptr<Teacher> t;
	void setTeacher(shared_ptr<Teacher> t1)
	{
		t = t1;
	}
};
 
void main()
{
	shared_ptr<Teacher> tt;
	shared_ptr<Student> ss;
 
	tt = make_shared<Teacher>();
	ss = make_shared<Student>();
 
	tt->setStudent(ss);
 
	ss->setTeacher(tt);
 
}