//Weak Pointer
#include<iostream>
using namespace std;

//refernce count is not increased in Weak_pointer compare from shared_pointer
int main()
{
    shared_pointer<int>p1(new int(10));
return 0;
}