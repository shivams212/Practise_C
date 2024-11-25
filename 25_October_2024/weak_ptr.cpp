//In share pointer if two different object is pointing to obj1 if ob1 should deleted then obj2 is now become dangling ptr

//We are using weak_ptr in case of cyclic dependency
#include<iostream>
#include<memory>
using namespace std;
int main()
{
    // shared_ptr<int>p1(new int(10));
    // weak_ptr<int>p2=p1;
    // cout<<*p1<<" "<<*(p2.lock())<<endl;
    // // cout<<p1.use_count()<<endl;
    // // cout<<p2.use_count()<<endl;
    // // cout<<endl;

    // p2.reset();

    // cout<<p1.use_count()<<endl;
    // cout<<p2.use_count()<<endl;
    // cout<<endl;


    
return 0;
}