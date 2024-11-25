#include<iostream>
#include<vector>
#include<exception>
// #include<bits/stdc++.h>

using namespace std;

class divideByZeroException : public exception {
public:
    // Override the what() 
    const char* what() {
        return "divideByZeroException: Division by zero is not allowed.";
    }
};

class myClass {
public:
  myClass() {

  }
  void myFunct(int x, int y)
  {
    int a = 20;
    try
    {
      //Exception -1
      //Appraoch-1
    //   int* p = new int[x * 1000000000];

      ////Approach-2
    //   while (true)
    //   {
    //    int* ptr = new int[10000000];
    //   }

      ////Exception -2
    //   vector<int> intVector;
    //   cout << intVector.at(5);

      ////Exception - 3
      if (y == 0)
        throw divideByZeroException();

      int k = x / y;
    }

    catch (out_of_range& ex)
    {
      cout << "Inside out of range exception." << endl;
    }
    catch (bad_alloc& ex)
    {
      cout << "exception thrown is: "<<ex.what() << endl;
      cout << "inside bad_alloc exception.." << endl;
    }
    catch (divideByZeroException& ex) {
      cout<<"Inside custom Exception Handler" <<ex.what() <<endl;
    }
    catch (exception& ex)
    {
      cout << "exception is: "<< endl;
    }
    catch (...)
    {
      cout << "Exception is thrown and caught in defailt catch block" << endl;
    }
    cout << "Outside try catch" << endl;
  }
};

int main()
{
  myClass obj;
  obj.myFunct(5,0);
    
return 0;
}