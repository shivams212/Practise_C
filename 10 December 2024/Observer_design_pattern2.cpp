//Stock Market Example
#include<iostream>
#include<list>
#include<string>
using namespace std;

//Observer Interface
class IPlatform
{
    public:
    virtual void update(string stockName,float price)=0;
};

//Subject (NSE)
class NSE
{
    private:
    list<IPlatform*> platform;
    string stockName;
    float price;

    public:
    NSE(string name,float initialPrice):stockName(name),price(initialPrice) {}

    void addPlatform(IPlatform* platform)
    {
        platform.push_back(platform);
    }
}