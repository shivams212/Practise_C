// #include<iostream>
// // #include<thread>

// using namespace std;

// void fun1()
// {
//     for(int i=0;i<100;i++)
//     {
//        std::cout<< cout<<"+";
//     }
// }

// void fun2()
// {
//     for(int i=0;i<100;i++)
//     {
//         std::cout<<cout<<"-";
//     }
// }

// int main()
// {
//     fun1();
//     fun2();
//     return 0;
// }



// #include <iostream>
// #include <thread>
// using namespace std;

// void function1(char symbol) {
//     for (int i = 0; i < 200; i++) {
//         std::cout << symbol<<" ";
//     }
// }

// void function2() {
//     for (int i = 200; i < 400; i++) {
//         std::cout << "-"<<" ";
//     }
// }

// int main() {
//     // function1();
//     // function2();

//     std::thread worker1(function1,'s'); 
//     std::thread worker2(function2); 


//     // system("pause>nul");
//     return 0;
// }


#include <iostream>
#include <thread>
#include <map>
#include <string>
#include <chrono>

using namespace std::chrono_literals;

void RefreshForecast(std::map<std::string, int> forecastMap) {
    while (true) {
        for (auto& item : forecastMap) {
            item.second++;
            std::cout << item.first << " - " << item.second << std::endl;
        }
        std::this_thread::sleep_for(2000ms);
    }
}

int main() {
    std::map<std::string, int> forecastMap = {
        {"New York", 15},
        {"Mumbai", 20},
        {"Berlin", 18}
    };

    std::thread bgWorker(RefreshForecast, forecastMap);

    system("pause>nul");

    return 0;
}
