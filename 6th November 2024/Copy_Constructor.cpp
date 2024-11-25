#include<iostream>
using namespace std;
class Number
{
    int a;
    public:
    Number() {
        a=0;
    }
    Number(int num)
    {
        a=num;
    }
    void display()
    {
        cout<<"The number for this object is "<<a<<endl;
    }
};
int main()
{
    Number x,y,z;
    x.display();
    y.display();
    z.display();
return 0;
}