#include<iostream>
using namespace std;
class Test
{
    int a,b,c;
    public:
    Test(int x=10,int y=20,int z=30)
    {
        a=x;
        b=y;
        c=z;
    }
    void show()
    {
        cout<<"Value of a is:"<<a<<endl;
        cout<<"Value of b is:"<<b<<endl;
        cout<<"Value of c is:"<<c<<endl;
    }
};

int main()
{
    Test obj1(1,2);//here missing is argument is filled with default argument
    // cout<<obj1.a;
    obj1.show();
    cout<<"-----------------------------"<<endl; 
    Test obj2;
    obj2.show();                
return 0;
}

//Value of a is:1
//Value of b is:2
//Value of c is:30
// --------------
// Value of a is:10
// Value of b is:20
// Value of c is:30