#include<iostream>
using namespace std;
class A
{
    public:
     virtual void f1()
    {
        cout<<"base f1 function";
    }
};

class B: public A
{
    public :
    void f1() //virtual function also here
    {
        cout<<"child f1 function";
    }
    void f2()
    {
        cout<<"child f1 function";
    }
};

class C: public B
{
    public :
    void f1() //virtual function also here
    {
        cout<<"child2 f1 function";
    }
    void f2()
    {
        cout<<"child2 f1 function";
    }
};

int main()
{
A *p,o1;
B o2;
p=&o2;//here we are passing to object 2 to B class so i am expecting output child f1 function but this output is not coming
p->f1();//Early Binding,  //LAte Binding(dynamic binding)->Virtual 

cout<<endl;
C o3;
p=&o3;
p->f1();
return 0;
}