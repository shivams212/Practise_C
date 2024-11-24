// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;
// int main()
// {
//     //Create a map of strings to integer
//     map<string,int> mp;

//     mp["one"]=1;
//     mp["two"]=2;
//     mp["three"]=3;





// return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={2,3,4,5,6};

    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};

    vector<pair<int,int>>::iterator it;
    for(it=v_p.begin();it!=v_p.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
//New Syntax
    for(it=v_p.begin();it!=v_p.end();++it)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }

    //After c++11
    for(int &value:v)//value will be copying and when we insert & then it won''t copy value then it will working on actual value
    {
        value++;
    }
    for(int value:v)
    {
        cout<<value<<" ";
    }
return 0;
}