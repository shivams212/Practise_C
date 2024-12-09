// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     vector<int> s={10,20,30,40,50};
//     vector<int> s2(s.size());

//     copy(s.begin(),s.end(),s2.begin());

//     cout<<"Elements of s are:"<<endl;
//     for(auto x:s)
//     {
//         cout<<x<<endl;
//     }

//     cout<<"Elements of s2 are:"<<endl;
//     for(auto x:s2)
//     {
//         cout<<x<<endl;
//     }

// return 0;
// }


#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int> v1={1,5,7,3,8,3};

    vector<int> v2(6);
    vector<int> v3(6);

    copy(v1.begin(),v1.begin()+3,v2.begin());
    //copying till 3 values beccause of v1.begin()+3

    for(int i:v2)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    copy_n(v1.begin(),4,v3.begin());

    cout<<"The new vector elements entered using copy_n:";

    for(int v:v3)
    {
        cout<<v<<" ";
    }

}