#include<iostream>
#include<string.h>
using namespace std;

class Test
{
    char st[100];
    public:
    void read()
    {
        cout<<"Enter String ";
        cin>>st;
    }

    void show()
    {
        cout<<"String ="<<st<<endl;

    }

    Test operator+(Test t2)
    {
        Test t3;
        strcpy(t3.st,st);
        strcat(t3.st," ");
        strcat(t3.st,t2.st);
        return t3;
    }
};

int main()
{
    Test t1,t2,t3;
    t1.read();
    t2.read();
    t3=t1.operator+(t2);
    t3.show();
    return 0;
     
}