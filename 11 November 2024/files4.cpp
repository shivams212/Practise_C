#include<iostream>
#include<fstream>
#include <string>

using namespace std;
int main()
{
    //Using Member Function
    
    ofstream out;
    out.open("file2.txt");
    out<<"This is me\n";
    out<<"This is me also\n";
    out<<"This is also me\n";
    out.close();


    ifstream in;
    string st;
    in.open("file2.txt");
    // if (in.is_open()) {
    //     cout << "File content:\n";
    //     while (getline(in, st)) { // Read line by line
    //         cout << st << endl;  // Print each line
    //     }
    //     in.close(); // Close the file
    // } else {
    //     cerr << "Error: Could not open the file for reading!" << endl;
    // }

    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st;
    }
    in.close();
return 0;
}