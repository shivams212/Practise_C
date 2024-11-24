#include <iostream>
#include <list>
#include <algorithm> // For std::sort, std::find_if
using namespace std;

int main() {
    // 1. Constructor examples
    std::list<int> list1 = {10, 20, 30}; // Initializer constructor
    std::list<int> list2(list1);        // Copy constructor
    std::list<int> list3(list1.begin(), list1.end()); // Range constructor

    // 2. Element Access
    cout << "First element: " << list1.front() << endl; // 10
    cout << "Last element: " << list1.back() << endl;  // 30

    // 3. Iterators
    cout << "Iterating with begin and end: ";
    for (auto it = list1.begin(); it != list1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Iterating in reverse: ";
    for (auto it = list1.rbegin(); it != list1.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 4. Capacity
    cout << "List size: " << list1.size() << endl; // 3
    cout << "Is the list empty? " << (list1.empty() ? "Yes" : "No") << endl;

    // 5. Modifiers
    list1.push_back(40);      // Add at the end
    list1.push_front(5);      // Add at the front
    list1.insert(++list1.begin(), 15); // Insert 15 after the first element
    list1.pop_back();         // Remove last element
    list1.pop_front();        // Remove first element

    cout << "List after modifications: ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    // Erase
    auto it = std::find(list1.begin(), list1.end(), 20); // Find element 20
    if (it != list1.end()) {
        list1.erase(it); // Remove 20
    }
    cout << "List after erasing 20: ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    // Resize
    list1.resize(5, 100); // Resize to 5 elements, new elements initialized to 100
    cout << "List after resizing: ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    // Swap
    std::list<int> list4 = {1, 2, 3};
    cout << "Before swap: list1 size = " << list1.size() << ", list4 size = " << list4.size() << endl;
    list1.swap(list4);
    cout << "After swap: list1 size = " << list1.size() << ", list4 size = " << list4.size() << endl;

    // 6. Operations
    list1 = {10, 10, 20, 30, 30}; // Reset list1
    list1.remove(10); // Remove all 10s
    cout << "List after remove(10): ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    list1.unique(); // Remove consecutive duplicates
    cout << "List after unique(): ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    list1.sort(); // Sort the list
    cout << "List after sort(): ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    list1.reverse(); // Reverse the list
    cout << "List after reverse(): ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    std::list<int> list5 = {5, 15, 25};
    list1.merge(list5); // Merge two sorted lists
    cout << "List after merge with list5: ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    // Splice
    std::list<int> list6 = {50, 60};
    list1.splice(list1.begin(), list6); // Move elements from list6 to list1
    cout << "List after splice(): ";
    for (const auto& el : list1) {
        cout << el << " ";
    }
    cout << endl;

    // Clear
    list1.clear();
    cout << "List after clear(), size: " << list1.size() << endl; // 0

    return 0;
}
