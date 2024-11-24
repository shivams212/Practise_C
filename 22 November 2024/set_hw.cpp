#include <iostream>
#include <set>
using namespace std;

class mycls1 {
public:
    int x; 
  
    mycls1(int value = 0) : x(value) {}

    bool operator<(const mycls1& other) const {
        return x < other.x;
    }
};

int main() {
  
    set<mycls1> mySet2;

    mySet2.insert(mycls1(10));
    mySet2.insert(mycls1(5));
    mySet2.insert(mycls1(20));


   cout << "Elements in the set (sorted by < operator):" <<endl;
    for (const auto& obj : mySet2) {
       cout << obj.x <<endl; 
    }

    return 0;
}
