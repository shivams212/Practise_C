//Inline is using in Short Function
#include<iostream>
using namespace std;

int func(int &x,int &y)
{
    int sum=x+y;
    return sum;
}

int main()
{
     int x,y;
     cin>>x>>y;
     cout<<func(x,y);

return 0;
}