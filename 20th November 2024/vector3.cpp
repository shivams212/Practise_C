//  Suppose a vector starts with an initial size of 1:

// Insert 1st element: Size = 1, Capacity = 1 (no reallocation needed).
// Insert 2nd element: Size = 2, Capacity = 2 (reallocation needed, copy 1 element).
// Insert 3rd element: Size = 3, Capacity = 4 (reallocation needed, copy 2 elements).
// Insert 4th element: Size = 4, Capacity = 4 (no reallocation needed).
// Insert 5th element: Size = 5, Capacity = 8 (reallocation needed, copy 4 elements).

//Remove Duplicates from Vector
#include<iostream>
#include<vector>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,2,3,3,3,4,4,1,1};
    sort(v1.begin(),v1.end());
    // for(int i : v1) cout<<i<<" ";

    auto it=unique(v1.begin(),v1.end());

    v1.resize(distance(v1.begin(),it));

    for(const int& num:v1)
    {
        cout<<num<<" ";
    }
    cout<<endl;

//SWAP TWO VECTOR
    vector<int> v2={1,2,3,9};
    vector<int> v3={4,5,6};

    v2.swap(v3);
    cout<<"v1: ";
    for(int i:v2) cout<<i<<" ";

    cout<<endl;

    cout<<"v2: ";
    for(int i:v3) cout<<i<<" ";

    cout<<endl;
    //SWAPPING TWO VECTOR OF STRINGS

    vector<string> v4={"Mango","Kiwi","Papaya"};
    vector<string> v5={"Orange","Apple"};

    v4.swap(v5);
    cout<<"V4: ";
    for(auto s:v4)  cout<<s<<" ";

    cout<<endl;

    cout<<"V5: ";
    for(auto s:v5)  cout<<s<<" ";

    //Different Ways to Copy a Vector in C++
    vector<int> v6={2,4,5,6,7};
    vector<int> v7=v6;

    for(auto i:v7)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //Using Vector Constructor
    vector<int> v8(v6);
    for(auto i:v8)  cout<<i<<" ";
    return 0;
}