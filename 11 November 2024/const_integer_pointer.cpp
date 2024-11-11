#include<iostream>
using namespace std;
int main()
{
    const int a = 2;
    const int* ptr = &a;
    // const int* const ptr = &a;

     int a1 = 2;
     int* ptr1 = &a1;
     cout<<ptr1<<endl; //0x61ff00
    //  cout<<*(ptr1)++<<endl;
     cout<<*(++ptr1)<<endl; //dereference the value of ptr ->2
     cout<<ptr1;//0x61ff04

    // const int* const ptr = &a;
    // (*ptr)++;

    // int a=5,b=9;

    // int *ptr;
    // ptr=&a;

    // cout<<ptr<<endl;

    // cout<<++(*ptr)<<endl;
    // cout<<(*ptr)++<<endl;
    // cout<<*ptr++<<endl;
    // cout<<*ptr++<<endl;
    // cout<<*ptr;
return 0;
}