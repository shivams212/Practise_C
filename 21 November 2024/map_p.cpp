// #include<iostream>
// #include<map>
// using namespace std;

// void print(map<int,string> &m)
// {
//     cout<<m.size()<<endl;
//      for(auto &i:m)
//     cout<<i.first<<" "<<i.second<<endl;
// }

// int main()
// {
//     map<int,string> m;
//     m[1]="abc";//TC->O(log(n)
//     m[2]="def";
//     m[3]="ghi";
//     m[4]="jkl";

//     m.insert({7,"shi"});
//     m.insert(make_pair(5,"vam"));

// //printing with the help of itertor
//     // map<int,string> ::iterator it;
//     // for(it=m.begin();it!=m.end();++it)
//     // {
//     //     // cout<<(*it).first<<" "<<(*it).second<<endl;
//     //     cout<<it->first<<" "<<it->second<<endl;
//     // }

//     print(m);
   

// }


//Given N strings ,print unique strings in lexiographical order with their frequency

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    map<string,int> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        mp[s]=mp[s]+1;
       // mp[s]++;
    }
    for(auto i :mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
return 0;
}
