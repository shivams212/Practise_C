#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int intVal1 = 42;
// cout<< static_cast<float>(intVal1)<<endl;
cout<<(float)intVal1<<endl;



double doubleVal = 9.99;
int intVal = static_cast<int>(doubleVal); // intVal = 9
cout<<intVal;
return 0;
}