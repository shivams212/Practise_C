#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Sort
{
    int c;
    public:
    bool operator()(int a,int b)
    {
        return a<b;
    }
};
int main()
{
    vector<int> v{23,14,9,20};
    sort(v.begin(),v.end(),Sort());
    for(int i:v)    cout<<i<<" ";
return 0;
}