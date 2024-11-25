#include<iostream>
using namespace std;
int main()
{
    // int a=4,b=5;
    // [](int &a, int &b)->void`{
    //     cout<<a<<" "<<b;
            // a=7;
    //     }(a,b);
    // cout<<endl<<a<<" "<<b<<endl;


//Below code is example of non-mutuable becuase here we can't change the value of a and b
//this is capture by value 
    // int a=4,b=5;
    // [=]()->void{
    //     cout<<a<<" "<<b;
    //     // a=7;
    //     }();
    // cout<<endl<<a<<" "<<b<<endl;

//Below code is example of capture by reference because in captue list we put &
      int a=4,b=5;
    [&]()->void{
        cout<<a<<" "<<b;
        // a=7;
        }();
    cout<<endl<<a<<" "<<b<<endl;
    return 0;
}