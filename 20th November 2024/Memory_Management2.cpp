#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int *ptr;
    ptr=new int[size];

    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<endl;
    }

    delete[] ptr;
    return 0;
}