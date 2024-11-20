#include<iostream>
#include<memory>
using namespace std;

//Shared Pointer
int main()
{
    shared_ptr<int>p1(new int(10));
    shared_ptr<int>p2;
    p2=p1;
    cout<<p1.use_count()<<endl;
    cout<<p2.use_count()<<endl;
    cout<<p1.get()<<endl;
    cout<<p2.get()<<endl;
    p1.reset();
    cout<<p1.use_count()<<endl;
    cout<<p2.use_count()<<endl;

    cout<<p1.get()<<endl;//for getting address
    cout<<p2.get()<<endl;

    return 0;
}