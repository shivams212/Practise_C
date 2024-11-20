#include<bits/stdc++.h>
using namespace std;
//UNIQUE_POINTER
void f1()
{

    unique_ptr<int> p1(new int(10));
    unique_ptr<int> p2;
    cout<<*p1<<endl;
    p2=move(p1);
    if(p1==nullptr)
    {
        cout<<"p1 is not an owner"<<endl;
    }
    else
    {
        cout<<*p1;
    }
    cout<<*p1<<endl;
}

int main()
{   
    f1();

    cout<<endl;
    return 0;
}