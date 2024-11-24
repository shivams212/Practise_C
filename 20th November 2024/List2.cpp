// // #include<iostream>
// // #include<list>

// // using namespace std;
// // int main()
// // {

// //     // list<int> myList;  // Creates an empty list

// //     // list<int> myList = {10, 20, 30};  // Creates a list with elements

// //     list<int> myList = {10, 20, 30};
// //     // list<int> copyList(myList);  // Creates a copy of myList

// //     // list<int> copyList1=myList;

// //     // for(int i:copyList1) cout<<i<<" ";

// //     // cout<<endl;

// //     // cout<<myList.front()<<" "<<endl;
// //     // cout<<myList.back()<<" ";

// //     myList.push_back(10);
// //     myList.push_back(10);
// //     myList.push_back(10);
// //     myList.push_back(10);

// //     for(auto itr=myList.begin();itr!=myList.end();itr++)
// //     {
// //         cout<<*itr<<" ";
// //     }

// //     myList.push_front(1);
// //     myList.push_front(2);
// //     cout<< "\n\nList after adding elements to the front:";
// //     cout<<endl;
// //     for(auto itr=myList.begin();itr!=myList.end();itr++)
// //     {
// //         cout<<*itr<<" ";
// //     }

// //     cout<<endl;
// //     myList.pop_front();
// //     myList.pop_back();

// //     for(int i:myList)   cout<<i<<" ";
// //     cout<<endl;

// //     for(auto it=myList.rbegin();it!=myList.rend();++it)
// //     {
// //         cout<<*it<<" ";
// //     }

// // return 0;
// // }


// // // C++ program to illustrate the 
// // // list::rbegin() function 
// // #include <bits/stdc++.h> 
// // using namespace std; 

// // int main() 
// // { 
// // list<int> lis = { 10, 20, 30, 40, 50 }; 

// // cout << "The list in reverse order: "; 

// // for (auto it = lis.rbegin(); it != lis.rend(); ++it) 
// // cout << *it << " "; 

// // return 0; 
// // } 


// // list empty() function in C++ STL
// // The list::empty() is a built-in function in C++ STL that is used to check whether a particular list container is empty or not. This function does not modify the list, it simply checks whether a list is empty or not, i.e. the size of the list is zero or not.

// #include<iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     list<int> demolist;

//     if(demolist.empty())
//     cout<<"Empty List\n";
//     else
//     cout<<"Not empty";

//     demolist.push_back(1);
//     demolist.push_back(2);

//     if(demolist.empty())
//     cout<<"Empty List\n";
//     else
//     cout<<"Not empty";

//     return 0;
// }

// C++ code to demonstrate the working of
// insert() function

#include <iostream>
#include <list> // for list operations
using namespace std;

int main()
{
	// declaring list
	list<int> list1;

	// using assign() to insert multiple numbers
	// creates 3 occurrences of "2"
	list1.assign(3, 2);

	// initializing list iterator to beginning
	list<int>::iterator it = list1.begin();

	// iterator to point to 3rd position
	advance(it, 2);

	// using insert to insert 1 element at the 3rd position
	// inserts 5 at 3rd position
	list1.insert(it, 5);

	// Printing the new list
	cout << "The list after inserting"
		<< " 1 element using insert() is : ";
	for (list<int>::iterator i = list1.begin();
		i != list1.end();
		i++)
		cout << *i << " ";

	cout << endl;

	// using insert to insert
	// 2 element at the 4th position
	// inserts 2 occurrences
	// of 7 at 4th position
	list1.insert(it, 2, 7);

	// Printing the new list
	cout << "The list after inserting"
		<< " multiple elements "
		<< "using insert() is : ";

	for (list<int>::iterator i = list1.begin();
		i != list1.end();
		i++)
		cout << *i << " ";

	cout << endl;

    list1.unique();

    for(int i:list1)
    {
        cout<<i<<" ";
    }
}
