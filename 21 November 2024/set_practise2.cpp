#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
    set<int> st={10,20,30,22,40};


    for(auto i:st)  cout<<i<<" ";

    auto it=next(st.begin(),3);//giving some other when i put 5 in this
    cout<<endl;
    st.erase(it);
    for(auto i:st)  cout<<i<<" ";
    cout<<endl;

    //checking element that exists or not in set
    cout<<st.count(10)<<endl;

    //checking element that doesn't exists
    cout<<st.count(1)<<endl;
return 0;
}