
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// User-defined class
class Product {
public:
    string productName;
    double price;

    // Constructor
    Product(string productName, double price) : productName(productName), price(price) {}

    // Overload == operator to compare products by price
    bool operator==(const Product& other) const {
        return price == other.price;  // Compare by price
    }

    // Getter for price
    double getPrice() const {
        return price;
    }
};

int main() {
    // Create a list of products
    vector<Product> productList = {
        Product("Laptop", 800.50),
        Product("Smartphone", 500.99),
        Product("Tablet", 300.75),
        Product("Smartwatch", 150.00),
        Product("Headphones", 50.25)
    };

    // Create a target product to search for (Product with price 300.75)
    Product targetProduct("", 300.75);

    // Use find algorithm to search for the product with price 300.75
    auto it = find(productList.begin(), productList.end(), targetProduct);

    // Check if the product was found
    if (it != productList.end()) {
        cout << "Product found: " << it->productName << " (Price: $" << it->getPrice() << ")\n";
    } else {
        cout << "Product not found.\n";
    }

    return 0;
}
