#include<iostream>
using namespace std;

class Sample
{
    int a,b;
    public:
    Sample() //Constructor
    {
        a=10;
        b=20;
        cout<<"Constructor Created"<<endl;
    }

    ~Sample() //Destructor
    {
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        cout<<"Destructor is called";
    }
};

int main()
{
    Sample s;

    return 0;

} 