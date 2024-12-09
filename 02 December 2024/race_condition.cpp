#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int myAmount=0;
//Race condition because both thread want to increment myAmount value at same time so, value is not increasing, with the help of lock and unlock
//we can increase the value
void addMoney()
{
    ++myAmount;//this is critical region
}

int main()
{
    thread t1(addMoney);
    thread t2(addMoney);
    
    t1.join();
    t2.join();
    
    cout<<myAmount<<endl;
}