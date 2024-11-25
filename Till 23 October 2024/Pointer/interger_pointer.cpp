#include<iostream>
using namespace std;
int main()
{
    int num=5;
    int *ptr=&num;

    double d=4.2;
    double *p2=&d;

    cout<<"size of integer is:"<<sizeof(num)<<endl;
    cout<<"size of pointer is:"<<sizeof(ptr)<<endl;
    cout<<"size of pointer is:"<<sizeof(p2);
    return 0;
}