#include<iostream>
using namespace std;
class A
{
    public:
     void f1()
    {
        cout<<"Base class f1"<<endl;
    }
    virtual void f2()
    {
        cout<<"Base class f2"<<endl;
    }
    virtual void f3()
    {
        cout<<"Base class f3"<<endl;
    }
    virtual void f4(int x)
    {
        cout<<"Base class f4"<<endl;
    }
};

class B:public A
{
    public:
    void f1()
    {
        cout<<"Derived class f1"<<endl;
    }
    void f2()
    {
         cout<<"Derived class f2"<<endl;
    }
    void f4(int x)
    {
         cout<<"Derived class f4"<<endl;
    }
    // void f5(int y)
    // {
    //     cout<<"Derived class f5"<<endl;
    // }
};
int main()
{
    A *p,o1;//pointer type A
    // B o2;
    p=&o1;
    p->f1();//Early binding in case of Class A
    p->f2();//Late binding in case of Class A -> Virtual Function
    p->f3();//LB
    p->f4(4);//LB
    // // p->f4(5);//errroe beacuse function with one argument doesn't exist
    

    // A *p;//pointer type A
    // B *o2=new B;
    // p=o2;
    // p->f1();//Early binding in case of Class A,denotes tyoe of pointer in Early binding
    // p->f2();//Late binding in case of Class A -> Virtual Function
    // p->f3();//LB
    // p->f4(4);//LB
    // p->f4(5);
    // p->f5(); 
    // p->f4();

return 0;
}