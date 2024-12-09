#include<bitset>
#include<iostream>

using namespace std;
int main()
{
    bitset<8> b1;
    bitset<8> b2(15);
    bitset<8> b3("1101");

    cout<<"b1"<<b1<<endl;
    cout<<"b2"<<b2<<endl;
    cout<<"b3"<<b3<<endl;
    return 0;
}