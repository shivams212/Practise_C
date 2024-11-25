// #include <iostream>
// #include <memory> // Replace with #include <auto_ptr.h> if using pre-C++11
// #include <auto_ptr.h>
// using namespace std;

// int main() {
//     auto_ptr<int> ptr1(new int(10)); // Create auto_ptr
//     auto_ptr<int> ptr2 = ptr1;       // Ownership transferred to ptr2

//     // Now, ptr1 is null, and only ptr2 owns the memory
//     if (!ptr1) {
//         std::cout << "ptr1 is null after ownership transfer!" << std::endl;
//     }
//     cout << "Value from ptr2: " << *ptr2 << endl;

//     return 0;
// }

#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1 = make_unique<int>(10);
    // std::unique_ptr<int> ptr2 = ptr1; // Error: Copying is not allowed

    unique_ptr<int> ptr2 = move(ptr1); // Explicit ownership transfer
    if (!ptr1) {
        cout << "ptr1 is null after ownership transfer!" << endl;
    }
    cout << "Value from ptr2: " << *ptr2 << std::endl;
    cout << "Value from ptr2: " << *ptr1 << std::endl;

    return 0;
}
