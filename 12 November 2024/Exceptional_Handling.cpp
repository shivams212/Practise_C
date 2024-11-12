#include<iostream>
#include<cstring>
#include<string>
#include<exception>
#include<vector>
using namespace std;

//own exception class
class divideByZeroException:public exception//exception is base class
{
    public:
    divideByZeroException():exception("divideByZeroException exception thrown")
    {

    }

};

class divideByZeroException1{
    public:
    divideByZeroException1()
    {

    }
};

class A
{
    public:
    A()
    {

    }

    void myFunc(int x,int y)
    {
        int a=20;
        try
        {
            //Exception
            // Approach -1
            // int* p=new int[x*1000000000]; //Exception thrown is:std::bad_array_new_length


            // Approach -2
            // while (true)
            // {
            //     int* ptr=new int[100000000];//Exception thrown is:std::bad_alloc
            // }

            // Approach-3
            // vector<int> intvector; //Inside Out of range exception.
            // cout<<intvector.at(5);

            //Approach-4
            if(y==0)
            throw divideByZeroException();
            int k=x/y;
            
        }

        catch(bad_alloc& ex)//here bad_alloc is class to catch the exception and passing value to ex object ,using the refernce 
        {
            cout<<"Exception thrown is:"<<ex.what()<<endl;
            cout<<"Inside Bad_Alloc Exception.."<<endl;
        }
        catch(out_of_range& ex)
        {
            cout<<"Inside Out of range exception."<<endl;
        }
        catch(exception& ex)
        {
            cout<<"Exception is:"<<ex.what()<<endl;
        }

        catch(divideByZeroException& ex)
        {
            cout<<"Inside custom Exception Handler"<<endl;
        }
        catch(...)//Default catch handler Exception
        {
            cout<<"Exception is thrown and caught in default catch block";
        }
        
    }

};

int main()
{
    A obj;
    obj.myFunc(3,0);
return 0;
}