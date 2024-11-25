#include<iostream>
#include<exception>
using namespace std;
class DivideByZeroException:public exception
{
    public:
    const char* what() const noexcept override{
        return "Custom Exception: Division by zero is not allowed!";
    }
};

void divideNumbers(int a,int b)
{
try{
    if(b==0)
    {
        throw DivideByZeroException();
        
    }
    cout<<"Result: "<<a/b<<endl;

}
catch(DivideByZeroException& e)
{
    cout<<"Error :"<<e.what()<<endl;
}
catch(exception& e)
{
    cout<<"Error: "<<e.what()<<endl;
}
}

int main()
{
    divideNumbers(10,2);//Valid Division
    divideNumbers(10,0);//Division by zero (will yhrow custom exception)
return 0;
}