#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;
    int avg;

    ptr1 =new int;//declare memory dynamically here
    ptr2 =new int;
    ptr3 =new int;

    cin>>*ptr1;
    cin>>*ptr2;
    cin>>*ptr3;

    avg=(*ptr1+*ptr2+*ptr3)/3;
    cout<<avg;

    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}