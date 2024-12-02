// #include <iostream>
// using namespace std;

// namespace namespace1 {
//     int age = 25;
//     string name = "Saldina";
// }

// namespace namespace2 {
//     int age = 26;
// }

// int main() {
//     cout << namespace2::age << endl;
//     cout << namespace1::name << endl;

//     system("pause>0");
//     return 0;
// }



#include <iostream>


namespace namespace1 {
    int age = 25;
    std::string name = "Saldina";
}

namespace namespace2 {
    int age = 26;
}

int main() {
    std::cout << namespace2::age << std::endl;
    std::cout << namespace1::name << std::endl;
    std::cin

    system("pause>0");
    return 0;
}
