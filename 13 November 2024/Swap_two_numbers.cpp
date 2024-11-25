#include<iostream>
using namespace std;

// void swap(int& x,int& y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<"Value of x is"<<x<<" and Value of y is"<<y<<endl;
// }

// template <typename T1>
// void swapValues(T1& x,T1& y)
// {
//     T1 temp=x;
//     x=y;
//     y=temp;
// }

template <typename T1,typename T2>
void swapValues(T1& x,T2& y)
{
    auto temp=x;
    x=y;
    y=temp;
    cout<<"new Value of x is "<<x<<" and Value of y is"<<y<<endl;
}

int main()
{
    // int x=5,y =10;
    // swapValues(x,y);
    // cout<<x<<" "<<y;

    int x=10,y=20;
    double x1=10.0,y1=20.11;
    swapValues(x,y);
    swapValues(x1,y1);
    cout<<"Value of x is "<<x<<" and Value of y is"<<y<<endl;
    cout<<"Value of x is "<<x1<<" and Value of y is"<<y1<<endl;


    string s1 = "Hello", s2 = "World";
    swapValues(s1, s2);
    cout << "After Swap (string): s1 = " << s1 << ", s2 = " << s2 << endl;
    // int x=5;
    // float y =10.11;
    // swapValues(x,y);
    // cout<<x<<" "<<y;

    int x2=20;
    float y2=20.11;
    swapValues(x2,y2);

return 0;
}