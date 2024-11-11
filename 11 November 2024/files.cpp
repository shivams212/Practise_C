// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     ofstream MyFile("output.txt");
//     MyFile << "This is the file content";
//     MyFile.close();

//     ifstream ReadFileByShivam("output.txt");
//     string storeFileDataInThis;
//     while(getline(ReadFileByShivam, storeFileDataInThis)) {
//         cout << storeFileDataInThis << endl;
//     }
// }


#include<iostream>
#include<fstream>
using namespace std;
    //1. Writing to a file using ofstream
int main()
{
    //Create/Open a file for writing
    ofstream outFile("example.txt");
    if(outFile.is_open())
    {
        outFile<<"Hello World";
        outFile<<"Welcome to file handling in C++";
        outFile<<"This file contains multiple lines of txt";
        cout<<"Data written to file successfully";
    } 
    else{
        cerr<<"Error opening file for writing";
    }
    outFile.close();
    
     // 2. Reading from a file using ifstream
    {
        ifstream inFile("example.txt");
    }

return 0;
}