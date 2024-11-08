#include<iostream>
using namespace std;

int fun1(int num1)
{
    num1=num1+2;
    cout<<"num1 value inside fun1: "<<num1<<endl;
   
}

int fun2(int &num2)
{
    num2=num2+3;
    cout<<"num2 value inside fun2: "<<num2<<endl;

}
int main()
{
    int num1=10;
    int num2=20;


    cout<<"Before passing value in function";

    cout<<"num1 ="<<num1<<endl;

    fun1(num1);
    fun2(num2);
    cout<<"After modification values are:";

    cout<<"num2 ="<<num2<<endl;

return 0;
}


// Before passing value in functionnum1 =10
// num1 value inside fun1: 12
// num2 value inside fun2: 23
// After modification values are:num2 =23