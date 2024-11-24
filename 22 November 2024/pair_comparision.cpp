#include <iostream>
#include <utility> 
using namespace std;

int main() {

     pair<int, char> myPair1(3, 'a');
     pair<int, char> myPair2(3, 'a');
     pair<int, char> myPair3(4, 'b');

    // Compare myPair1 and myPair2
    if (myPair1 == myPair2) {
         cout << "1 is equal to 2" <<  endl;
    } else if (myPair1 < myPair2) {
         cout << "1 is less than 2" <<  endl;
    } else if (myPair1 > myPair2) {
         cout << "1 is greater than 2" <<  endl;
    }

    // Compare myPair1 and myPair3
    if (myPair1 == myPair3) {
         cout << "1 is equal to 3" <<  endl;
    } else if (myPair1 < myPair3) {
         cout << "1 is less than 3" <<  endl;
    } else if (myPair1 > myPair3) {
         cout << "1 is greater than 3" <<  endl;
    }

    return 0;
}
