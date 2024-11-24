#include <map>
#include <iostream>
using namespace std;
int main()
{

    map<int, char> myMap{{1, 'a'}, {2, 'b'}};
    // Initializer list

    myMap.insert(make_pair(10, 'a'));

    for (auto x : myMap)
    {
        cout << x.first << x.second << endl;
    }

    return 0;
}