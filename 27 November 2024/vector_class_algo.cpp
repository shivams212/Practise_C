// #include <iostream>
// #include <vector>
// #include <algorithm> // For STL algorithms
// using namespace std;

// class Vehicle {
// public:
//     string name;
//     int speed;

//     Vehicle(string name, int speed) : name(name), speed(speed) {}

//     // Overloading < operator for sorting and binary search
//     bool operator<(const Vehicle& other) const {
//         return speed < other.speed;
//     }

//     // Overloading == operator for find and count
//     bool operator==(const Vehicle& other) const {
//         return name == other.name && speed == other.speed;
//     }
// };

// int main() {
//     // Create a vector of vehicles
//     vector<Vehicle> vehicles = {
//         {"Car", 120},
//         {"Bike", 80},
//         {"Truck", 60},
//         {"Bus", 70},
//         {"Bicycle", 20}
//     };

//     // Display original vector
//     cout << "Original vector:\n";
//     for (const auto& v : vehicles) {
//         cout << v.name << " (Speed: " << v.speed << ")\n";
//     }
//     cout << endl;

//     // Sort the vehicles by speed using the < operator
//     sort(vehicles.begin(), vehicles.end());
//     cout << "Sorted by speed (using < operator):\n";
//     for (const auto& v : vehicles) {
//         cout << v.name << " (Speed: " << v.speed << ")\n";
//     }
//     cout << endl;

//     // Count occurrences of a specific vehicle (using == operator)
//     Vehicle targetVehicle("Bus", 70);
//     int countBus = count(vehicles.begin(), vehicles.end(), targetVehicle);
//     cout << "Count of 'Bus' with speed 70: " << countBus << endl;

//     // Find a specific vehicle (using == operator)
//     auto it = find(vehicles.begin(), vehicles.end(), targetVehicle);
//     if (it != vehicles.end()) {
//         cout << "Found vehicle: " << it->name << " (Speed: " << it->speed << ")\n";
//     } else {
//         cout << "Vehicle not found.\n";
//     }

//     // Binary search (vector must be sorted)
//     bool isBikePresent = binary_search(vehicles.begin(), vehicles.end(), Vehicle("Bike", 80));
//     cout << "Is 'Bike' with speed 80 present? " << (isBikePresent ? "Yes" : "No") << endl;

//     return 0;
// }


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;

// class Product
// {
// public:
//     string productName;
//     double price;

//      Product(string productName, double price) : productName(productName), price(price) {}


//     bool operator<(const Product& other)const {
//         return productName < other.productName;
//     }
// };

// int main()
// {
//     vector<Product> productList = {
//         {"Laptop",80000},
//         {"SmartPhone",40000},
//         {"Tablet",48000},
//         {"Smartwatch",30000},
//         {"HeadPhone",20000},
//         {"Earbude",6000},
//     };

//     cout << "Original product list:\n";
//     for (auto it = productList.begin(); it != productList.end(); ++it)
//     {
//         cout << it->productName << "(Price Rs)" << it->price << ")\n";
//     }cout << endl;


//     // Sort the vector using the < operator
//     sort(productList.begin(), productList.end());

//     // Display the sorted vector using iterator
//     cout << "Sorted by price (ascending):\n";
//     for (auto it = productList.begin(); it != productList.end(); ++it) {
//         cout << it->productName << " (Price: $" << it->price << ")\n";
//     }
//     cout << endl;

//     return 0;
// }

// Original product list:
// Laptop(Price Rs)80000)
// SmartPhone(Price Rs)40000)
// Tablet(Price Rs)48000)
// Smartwatch(Price Rs)30000)
// HeadPhone(Price Rs)20000)
// Earbude(Price Rs)6000)

// Sorted by price (ascending):        
// Earbude (Price: $6000)
// HeadPhone (Price: $20000)
// Laptop (Price: $80000)
// SmartPhone (Price: $40000)
// Smartwatch (Price: $30000)
// Tablet (Price: $48000)


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;

// class Product
// {
//     public:
//     string productName;
//     double price;

//      Product(string p_Name, double p_price) : productName(p_Name), price(p_price) {}
// };

// int main()
// {
//     vector<Product> productList=
//     {
//         {"Laptop",80000},
//         {"Smartphone",30000},
//         {"Tablet",30000},
//         {"Smartwatch",8000},
//         {"Headphone",4000},
//     };

//     cout<<"Original product list:\n";
//     for(auto it=productList.begin();it!=productList.end();++it)
//     {
//         cout<<(*it).price<<"(Price: $)"<<(*it).productName<<")\n";
//     }
//     cout<<endl;

//     //  Reverse the vector using reverse algorithm
//     reverse(productList.begin(), productList.end());

//     // Display the reversed vector using iterator
//     cout << "Reversed product list:\n";
//     for (auto it = productList.begin(); it != productList.end(); ++it) {
//         cout << it->productName << " (Price: $" << it->price << ")\n";
//     }
//     cout << endl;



// }

// 80000(Price: $)Laptop)
// 30000(Price: $)Smartphone)
// 30000(Price: $)Tablet)
// 8000(Price: $)Smartwatch)
// 4000(Price: $)Headphone)

// Reversed product list:
// Headphone (Price: $4000)
// Smartwatch (Price: $8000)
// Tablet (Price: $30000)
// Smartphone (Price: $30000)
// Laptop (Price: $80000)


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<string>
// using namespace std;

// class Product
// {
//     public:
//     string productName;
//     double price;

//     Product(string p_name,double p_price):productName(p_name),price(p_price){}

//     bool operator<(const Product& other) const{
//         return price<other.price;
//     }
// };

// int main()
// {
//     vector<Product> productList=
//     {
//         {"Laptop", 100.50},
//         {"Smartphone", 500.99},
//         {"Tablet", 300.75},
//         {"Smartwatch", 150.00},
//         {"Headphones", 5000.25}
//     };

//     auto maxProduct=max_element(productList.begin(),productList.end());

//     if (maxProduct != productList.end()) {
//         cout << "Product with the highest price:\n";
//         cout << maxProduct->productName << " (Price: $" << maxProduct->price << ")\n";
//     } else {
//         cout << "The product list is empty.\n";
//     }

//     return 0;
// }

// // Headphones (Price: $5000.25) 


// #include <iostream>
// #include <vector>
// #include <algorithm> // For min_element
// #include <string>
// using namespace std;

// // User-defined class
// class Product {
// public:
//     string productName;
//     double price;

//     // Constructor
//     Product(string productName, double price) : productName(productName), price(price) {}

//      // Overload < operator for comparison based on price
//      bool operator<(const Product& other) const {
//          return price < other.price;  // Compare based on price
//      }
// };

// int main() {
//     // Vector of user-defined data type (Product)
//     vector<Product> productList = {
//         {"Laptop", 80.50},
//         {"Smartphone", 50.99},
//         {"Tablet", 4400.75},
//         {"Smartwatch", 150.00},
//         {"Headphones", 10.25}
//     };

//     // Use min_element to find the product with the lowest price
//     auto minProduct = min_element(productList.begin(), productList.end());

//     // Display the product with the lowest price
//     if (minProduct != productList.end()) {
//         cout << "Product with the lowest price:\n";
//         cout << minProduct->productName << " (Price: $" << minProduct->price << ")\n";
//     }
//     else {
//         cout << "The product list is empty.\n";
//     }

//     return 0;
// }

// Product with the lowest price:
// Headphones (Price: $10.25)



// #include <iostream>
// #include <vector>
// #include <algorithm> // For max_element
// #include <numeric>   // For accumulate
// #include <string>
// using namespace std;

// // User-defined class
// class Product {
// public:
//     string productName;
//     double price;

//     // Constructor
//     Product(string productName, double price) : productName(productName), price(price) {}

//     // Overload < operator for comparison based on price
//     bool operator<(const Product& other) const {
//         return price < other.price;
//     }

//     // Member function to return the price of a product
//     double getPrice() const {
//         return price;
//     }
// };

// // Function to accumulate prices, using a regular function instead of a lambda
// double accumulatePrice(const vector<Product>& productList) {
//     // Function to accumulate prices using the getPrice method of Product
//     double sum = 0.0;
//     for (const auto& product : productList) {
//         sum += product.getPrice(); // Add each product's price
//     }
//     return sum;
// }

// int main() {
//     // Vector of user-defined data type (Product)
//     vector<Product> productList = {
//         {"Laptop", 800.50},
//         {"Smartphone", 500.99},
//         {"Tablet", 4400.75},
//         {"Smartwatch", 150.00},
//         {"Headphones", 50.25}
//     };

//     // Calculate the total price using the accumulatePrice function
//     double totalPrice = accumulatePrice(productList);

//     // Display the result
//     cout << "Total price of all products: $" << totalPrice << endl;

//     return 0;
// }

// Total price of all products: $5902.49


// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;

// class Product
// {
//     public:
//     string productName;
//     double price;

//     Product(string p_name,double p_price):productName(p_name),price(p_price){}

//     bool operator==(const Product& other)const{
//         return price==other.price;
//     }

//     double getPrice() const{
//         return price;
//     }
// };

// int main()
// {
//     vector<Product> productList={
//         {"Laptop", 800.50},
//         {"Smartphone", 500.99},
//         {"Tablet", 4400.75},
//         {"Smartwatch", 150.00},
//         {"Headphones", 50.25}
//     };

//     Product targetProduct("", 800.50); // Creating a target product with price 800.50
//     int countPrice = count(productList.begin(), productList.end(), targetProduct);

//     // Display the result
//     cout << "Number of products with price 800.50: " << countPrice << endl;

//     return 0;
// }

// // Number of products with price 800.50: 1

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;

// // User-defined class
// class Product {
// public:
//     string productName;
//     double price;

//     // Constructor
//     Product(string productName, double price) : productName(productName), price(price) {}

//     // Overload == operator to compare products by price
//     bool operator==(const Product& other) const {
//         return price == other.price;  // Compare by price
//     }

//     // Getter for price
//     double getPrice() const {
//         return price;
//     }
// };

// int main() {
//     // Create a list of products
//     vector<Product> productList = {
//         Product("Laptop", 800.50),
//         Product("Smartphone", 500.99),
//         Product("Tablet", 300.75),
//         Product("Smartwatch", 150.00),
//         Product("Headphones", 50.25)
//     };

//     // Create a target product to search for (Product with price 300.75)
//     Product targetProduct("", 300.75);

//     // Use find algorithm to search for the product with price 300.75
//     auto it = find(productList.begin(), productList.end(), targetProduct);

//     // Check if the product was found
//     if (it != productList.end()) {
//         cout << "Product found: " << it->productName << " (Price: $" << it->getPrice() << ")\n";
//     } else {
//         cout << "Product not found.\n";
//     }

//     return 0;
// }

// Product found: Tablet (Price: $300.75)

// #include <iostream>
// #include <vector>
// #include <algorithm>  // For binary_search and sort
// #include <string>
// using namespace std;

// // User-defined class
// class Product {
// public:
//     string productName;
//     double price;

//     // Constructor
//     Product(string productName, double price) : productName(productName), price(price) {}

//     // Overload < operator for comparison (needed for binary_search)
//     bool operator<(const Product& other) const {
//         return price < other.price;  // Compare based on price
//     }

//     // Getter for price
//     double getPrice() const {
//         return price;
//     }

//     // Getter for productName
//     string getProductName() const {
//         return productName;
//     }
// };

// int main() {
//     // Create a list of products
//     vector<Product> productList = {
//         Product("Laptop", 800.50),
//         Product("Smartphone", 500.99),
//         Product("Tablet", 300.75),
//         Product("Smartwatch", 150.00),
//         Product("Headphones", 50.25)
//     };

//     // Sort products based on price using the overloaded < operator
//     sort(productList.begin(), productList.end());

//     // Create a target product to search for (Product with price 300.75)
//     Product targetProduct("", 300.75);

//     // Use binary_search algorithm to check if the product is in the sorted vector
//     bool found = binary_search(productList.begin(), productList.end(), targetProduct);

//     // Output the result
//     if (found) {
//         cout << "Product with price " << targetProduct.getPrice() << " is found.\n";
//     } else {
//         cout << "Product with price " << targetProduct.getPrice() << " is not found.\n";
//     }

//     return 0;
// }
// // Product with price 300.75 is found.


// #include <iostream>
// #include <vector>
// #include <algorithm>  // For lower_bound
// #include <string>
// using namespace std;

// // User-defined class
// class Product {
// public:
//     string productName;
//     double price;

//     // Constructor
//     Product(string productName, double price) : productName(productName), price(price) {}

//     // Overload < operator for comparison (needed for lower_bound)
//     bool operator<(const Product& other) const {
//         return price < other.price;  // Compare based on price
//     }

//     // Getter for price
//     double getPrice() const {
//         return price;
//     }

//     // Getter for productName
//     string getProductName() const {
//         return productName;
//     }

//     // Overload == operator for comparison (needed for lower_bound)
//     bool operator==(const Product& other) const {
//         return price == other.price;  // Compare based on price
//     }
// };

// int main() {
//     // Create a list of products
//     vector<Product> productList = {
//         Product("Laptop", 800.50),
//         Product("Smartphone", 500.99),
//         Product("Tablet", 300.75),
//         Product("Smartwatch", 150.00),
//         Product("Headphones", 50.25)
//     };

//     // Sort products based on price using the overloaded < operator
//     sort(productList.begin(), productList.end());

//     // Create a target product to search for (Product with price 500.99)
//     Product targetProduct("", 500.99);

//     // Use lower_bound to find the first position where price is >= targetProduct.price
//     auto lb = lower_bound(productList.begin(), productList.end(), targetProduct);
    
//     // Check if the lower_bound returned a valid iterator
//     if (lb != productList.end()) {
//         cout << "Lower bound for price " << targetProduct.getPrice() << " is at index " 
//              << distance(productList.begin(), lb) << " (" << lb->getProductName() << ")\n";
//     } else {
//         cout << "No product found with price >= " << targetProduct.getPrice() << "\n";
//     }

//     return 0;
// }

// // Lower bound for price 500.99 is at index 3 (Smartphone)



#include <iostream>
#include <vector>
#include <algorithm>  // For upper_bound
#include <string>
using namespace std;

// User-defined class
class Product {
public:
    string productName;
    double price;

    // Constructor
    Product(string productName, double price) : productName(productName), price(price) {}

    // Overload < operator for comparison (needed for upper_bound)
    bool operator<(const Product& other) const {
        return price < other.price;  // Compare based on price
    }

    // Getter for price
    double getPrice() const {
        return price;
    }

    // Getter for productName
    string getProductName() const {
        return productName;
    }

    // Overload == operator for comparison (needed for upper_bound)
    bool operator==(const Product& other) const {
        return price == other.price;  // Compare based on price
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

    // Sort products based on price using the overloaded < operator
    sort(productList.begin(), productList.end());

    // Create a target product to search for (Product with price 500.99)
    Product targetProduct("", 500.99);

    // Use upper_bound to find the first position where price is > targetProduct.price
    auto ub = upper_bound(productList.begin(), productList.end(), targetProduct);
    
    // Check if the upper_bound returned a valid iterator
    if (ub != productList.end()) {
        cout << "Upper bound for price " << targetProduct.getPrice() << " is at index " 
             << distance(productList.begin(), ub) << " (" << ub->getProductName() << ")\n";
    } else {
        cout << "No product found with price > " << targetProduct.getPrice() << "\n";
    }

    return 0;
}
// Upper bound for price 500.99 is at index 4 (Laptop)