// C++ Program to illustrate the use of
// std::set::lower_bound() method
#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s = {1, 5, 3, 7, 6};
      
      cout << *s.lower_bound(10)<<endl;
    //   cout << *s.upper_bound(5);
  
    return 0;
}

// Remove element from bucket
// come with some other hashing 