#include<iostream>
using namespace std;
class Sample
{
    public:
    int a,b;
    Sample(int a,int b) //This is parameterized Constructor
    {
        // (*this).a=a;
        // (*this).b=b;

        this->a=a;
        this->b=b;
    }
    
    Sample(Sample &old) //Copy COnstructor
    {
        a=old.a;
        b=old.b;

    }
        void print()
        {
            cout<<"Value of a is:"<<a<<endl;
            cout<<"Value of b is:"<<b<<endl;
        }

};

int main()
{
    Sample obj1(2,3); //Invoked Parameterized constructor
    // cout<<obj1.a<<endl;
    // cout<<obj1.b<<endl;
    obj1.print();

    //copy value
    Sample &obj2(obj1);
    // cout<<obj2.a;
    obj2.print();

return 0;
}