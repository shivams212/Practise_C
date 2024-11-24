//dequeue have sequential container

//whatever we can can done in dequeue is also done in list

//forward list->using this for performance

// O(1)->Hasing

// O(long n)>BST

// HASHING ALOGRITHM-
// beST CASE-o(1)
// WORST CASE-O(N)

// BUCKET

// ->COMPLEXITY OF TREE(LEARN)

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> mySet;
    // set<int,greater<>> mySet;//greater is predicate

    //cahnge order of insertion using class

//oNE WAY TO CREATE PAIR
    pair<int ,char> myPair(1,'c');//This datatype is mostly used in stl,constructor
    
//AMOTHER WAY TO CREATE PAIR

    //Pair is used very frequency in map ans set
    //Pair is used to store homo or hetrogenous data type

// ->first elemnt is iterator(pointing to specific ) and second element is boolean
    cout<<myPair.first<<endl;
    cout<<myPair.second<<endl;

    mySet.insert(1);
    mySet.insert(13);
    mySet.insert(10);
    mySet.insert(8);

    for(int i:mySet)
    {
        cout<<i<<endl;
    }


return 0;
}