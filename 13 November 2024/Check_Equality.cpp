#include<iostream>
using namespace std;

template<typename A,typename B>

auto equality(A a,B b)
{
    if(a==b)
    {
        return "Both value is same";
    }
    else
    return "Both the values is not same";
}
int main()
{

cout<<equality(10,10.0);
return 0;
}