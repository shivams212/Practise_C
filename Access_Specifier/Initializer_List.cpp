#include<iostream>
using namespace std;

class Test{
    public:
    int a;
    int b;

    // public:
    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):a(i),b(i+j)
    // Test(int i,int j):a(i),b(2*j)
//     Test(int i,int j):a(i),b(a+j)
//     // Test(int i,int j):b(j),a(i+b)->RED FLAG this will create problem because a will be initialized first 
//     {
//         cout<<"Constructor executed "<<endl;
//         cout<<"Value of a is "<<a<<endl;
//         cout<<"Value of b is "<<b<<endl;
//     }
//     Test(){}    //Default Constructor
// };

//Constructor
public:
Test(int i,int j)
{
    a=i;
    b=j;
}
};

int main()
{
Test obj(4,6);
cout<<"Value of a is: "<<obj.a;
cout<<"Value of b is: "<<obj.b;
return 0;
}