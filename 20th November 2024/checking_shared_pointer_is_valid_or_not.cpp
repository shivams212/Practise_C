// #include <iostream>
// #include <memory>
 
// class A;  // Forward declaration
 
// class B {
// public:
//     std::shared_ptr<A> a_ptr;  // B has a shared pointer to A
// };
 
// class A {
// public:
//     std::shared_ptr<B> b_ptr;  // A has a shared pointer to B
//     ~A() { std::cout << "A deleted\n"; }
// };
 
// int main() {
//     std::shared_ptr<A> a = std::make_shared<A>();
//     std::shared_ptr<B> b = std::make_shared<B>();
 
//     a->b_ptr = b;
//     b->a_ptr = a;  // Circular reference between A and B
 
//     // To break the cycle, we would use weak_ptr in one of the classes
//     // For example, change `std::shared_ptr<A> a_ptr` in B to `std::weak_ptr<A> a_ptr`
 
//     return 0;
// }
//In above code As a result, neither A nor B is deleted, leading to a memory leak.

#include <iostream>
#include <memory>

class A;  // Forward declaration

class B {
public:
    std::weak_ptr<A> a_ptr;  // Change to weak_ptr
};

class A {
public:
    std::shared_ptr<B> b_ptr;
    ~A() { std::cout << "A deleted\n"; }
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a;  // Now, no circular reference occurs.

    return 0;
}
