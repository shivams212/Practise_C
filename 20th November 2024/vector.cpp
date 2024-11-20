#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v1;

    // cout<<v1.size()<<endl;
    // cout<<v1.capacity()<<endl;

    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
    // v1.push_back(5);

    // cout<<v1.size()<<endl;
    // cout<<v1.capacity()<<endl;

    // v1.pop_back();

    // cout<<v1.size()<<endl;
    // cout<<v1.capacity()<<endl;

    vector<int> v1={1,2,3};//If i know the element,way to declare vector

    vector<int> v3(v1.begin(),v1.end());//Another ways to create vector from another vector

    vector<int> v2(5,10);//here v2 vector having 5 elements and all elements are assign with 10[Different ways to create vector]

    for(int x:v2) //range based for loop
    {
        cout<<x<<endl;
    }

     cout<<v1[2]<<endl;//O(1)->Time Complexity to fetch the element

     //Inserting the elements complexity->O(n)

     //Practise all vector class
     //Simple Examples

     v1[3];//here this is using suscript operator


return 0;
}