#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st= " Hi SHivam";
    // //Opening files using constructor and writing it
    // ofstream out("files2.txt");
    // out<<st;

    //Opening files tusing constructor and reading it
    string st2;
    ifstream input("file2b.txt");
    while (getline(input,st2))
    {
        cout<<st2;
    }

return 0;
}