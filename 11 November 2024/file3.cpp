#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    //connecting our file with cout stream
// ofstream sout("file2.txt");

// // //Creating a name string and filling it with the string entered by user

// string name;
// // cin>>name;
// getline(cin,name);                     

// //Writing string to the file
// sout<<name;

// sout.close();


ifstream hin("file2.txt");
string content;
// hin>>content;
while (getline(hin, content)) { // Read each line until the end of the file
        cout << content << endl;    // Print the line to the console
    }
// cout<<"The content of this file is:"<<content;
hin.close();
return 0;
}