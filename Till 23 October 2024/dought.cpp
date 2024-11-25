#include<iostream>
using namespace std;
struct padded
{
    char c;
    int x;
    char y;
    double d;
};

struct padded1
{
    char c:1;
    int x:4;
    char y:1;
    double d:1;
};

int main()
{
    cout<<sizeof(padded);
    cout<<sizeof(padded1);

return 0;
}