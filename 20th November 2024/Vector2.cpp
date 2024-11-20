#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;//Creating an Empty vector

    v1.push_back(1);//Inserting value in Vector
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    for(int i:v1)//range-based for loop
    {
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> v2={1,4,2,3,5};//Creating a vector of 5 elements from initializer list

    for(int j:v2)
    {
        cout<<j<<" ";
    }
    cout<<endl;

    vector<int> v3(5,10);//Creating a vector of 5 elements with default value i.e. 10

    for(int k:v3)
    {
        cout<<k<<" ";
    }
    cout<<endl;

    vector<char> v4={'a','b','c','d','e','f'};

    cout<<v4[6]<<endl;//this method is fast but doesn't check wheather the given index exists in the vector or not[garbage value be coming]
    
    cout<<v4.at(5)<<endl;

    //UPDATING THE VALUE IN VECTOR
    v4[3]='D';
    v4.at(2)='C';

    for(char l: v4)
    {
        cout<<l<<" ";
    }
    cout<<endl;
    //INSERTING THE ELEMENTS IN VECTOR

    vector <char> v5={'s','i','v','a','m'};
    v5.push_back('s');

    v5.insert(v5.begin()+1,'h');

    for(char a:v5)   cout<<a<<" ";

    cout<<endl;
    //DELETING THE ELEMENT FROM VECTOR->vector_erase()

    //Deleting last elements from vector
    v5.pop_back();//This is faster than other
    for(char a:v5)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    //Deleting element 'i'
    v5.erase(find(v5.begin(),v5.end(),'i'));

    cout<<"After deleting i character from vector:"<<" ";
    for(char a:v5)  cout<<a<<" ";

    
    return 0;
}