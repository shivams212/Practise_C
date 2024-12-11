#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>
using namespace std;

std::condition_variable cv;
std::mutex m;
long balance = 0;

void addMoney(int money) {
    std::lock_guard<std::mutex> lg(m);
    balance += money;
    cout << "Amount Added, Current Balance: " << balance << endl;
    cv.notify_one(); // Notify waiting threads
}

void withdrawMoney(int money) {
    std::unique_lock<std::mutex> ul(m);
    cv.wait(ul, [] { return (balance != 0) ? true : false; }); // Wait until balance is non-zero

    if (balance >= money) {
        balance -= money;
        cout << "Amount Deducted: " << money << endl;
    } else {
        cout << "Amount Can't Be Deducted, Current Balance Is Less Than " << money << endl;
    }
    cout << "Current Balance Is: " << balance << endl;
}

int main() {
    std::thread t1(withdrawMoney, 600); // Try to withdraw 600
    std::thread t2(addMoney, 500);     // Add 500

    t1.join();
    t2.join();

    return 0;
}
