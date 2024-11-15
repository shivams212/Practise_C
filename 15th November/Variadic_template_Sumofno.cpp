#include<iostream>
using namespace std;

    template<typename T>
    T sum(T value)
    {
        return value;//Base
    }

    template<typename T,typename...Args>
    T sum(T first,Args...rest)
    {
        return first+sum(rest...);//Recursive expansion
    }


int main()
{

    cout<<"Sum of 1,2,3: "<<sum(1,2,3)<<endl;
    cout<<"Sum of 1.1,1.2,1.3: "<<sum(1.1,1.2,1.3)<<endl;
    cout<<"Sum of 10: "<<sum(10);


    return 0;
}