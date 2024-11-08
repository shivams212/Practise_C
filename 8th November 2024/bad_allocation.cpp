// Bad Alloc Error
#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        
    }
    
    void memFunc() {
      
        int* ptr = new int[100000000000];//size of array is too large/bad_allocation
        // int* ptr2 = (int*)malloc(sizeof(int) * 100000000000); 
    }
    
    int memFunc2(int x, int y) { // y as 0 exception handling
        int c = x / y;
        return c;
    }
};

int main() {
    Test obj;
    obj.memFunc();
    obj.memFunc2(2,0);//bad allocation beacuse denominator value can't be zero
}