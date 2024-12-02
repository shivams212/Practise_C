#include <iostream>
#include <set>
#include <algorithm>  // For max_element, min_element
#include <numeric>    // For accumulate
#include <iterator>   // For reverse_iterator
using namespace std;

// User-defined class
class Product {
public:
    string productName;
    double price;

    Product(string productName, double price) : productName(productName), price(price) {}

    bool operator<(const Product& other) const {
        return price < other.price;  // Sorting based on price
    }

    double getPrice() const {
        return price;
    }

    string getProductName() const {
        return productName;
    }
};

int main() {
    // Set of products
    set<Product> productSet = {
        Product("Laptop", 800.50),
        Product("Smartphone", 500.99),
        Product("Tablet", 300.75),
        Product("Smartwatch", 150.00),
        Product("Headphones", 50.25)
    };

    // 1. Max Element: Finding the product with max price
    auto maxProduct = *productSet.rbegin();  // max element is the last element in a sorted set
    cout << "Max Product: " << maxProduct.getProductName() << " ($" << maxProduct.getPrice() << ")\n";

    // 2. Min Element: Finding the product with min price
    auto minProduct = *productSet.begin();  // min element is the first element in a sorted set
    cout << "Min Product: " << minProduct.getProductName() << " ($" << minProduct.getPrice() << ")\n";

    // 3. Accumulate: Calculate the total price of all products
    double totalPrice = accumulate(productSet.begin(), productSet.end(), 0.0,
                                    [](double sum, const Product& p) {
                                        return sum + p.getPrice();
                                    });
    cout << "Total Price: $" << totalPrice << "\n";

    // 4. Count: Checking how many products have a certain price (set only allows unique values)
    Product targetProduct("", 500.99);  // Looking for price 500.99
    int countPrice = productSet.count(targetProduct);  // It will return either 0 or 1
    cout << "Number of products with price 500.99: " << countPrice << "\n";

    // 5. Find: Finding a product by its price
    auto search = productSet.find(Product("", 800.50));  // Searching for a product with price 800.50
    if (search != productSet.end()) {
        cout << "Found product: " << search->getProductName() << " ($" << search->getPrice() << ")\n";
    } else {
        cout << "Product not found.\n";
    }

    // 6. Binary Search: Using find as binary search
    auto searchBinary = productSet.find(Product("", 300.75));  // Searching for product with price 300.75
    if (searchBinary != productSet.end()) {
        cout << "Binary Search found product: " << searchBinary->getProductName() << "\n";
    } else {
        cout << "Product not found in binary search.\n";
    }

    // 7. Lower Bound: Finding the first product that is not less than price 500.00
    auto lb = productSet.lower_bound(Product("", 500.00));
    if (lb != productSet.end()) {
        cout << "Lower Bound Product: " << lb->getProductName() << " ($" << lb->getPrice() << ")\n";
    }

    // 8. Upper Bound: Finding the first product with price strictly greater than 500.00
    auto ub = productSet.upper_bound(Product("", 500.00));
    if (ub != productSet.end()) {
        cout << "Upper Bound Product: " << ub->getProductName() << " ($" << ub->getPrice() << ")\n";
    }

    // 9. Reverse: Set does not support reverse directly but we can iterate in reverse using rbegin and rend
    cout << "Products in reverse order:\n";
    for (auto it = productSet.rbegin(); it != productSet.rend(); ++it) {
        cout << it->getProductName() << " ($" << it->getPrice() << ")\n";
    }

    return 0;
}
