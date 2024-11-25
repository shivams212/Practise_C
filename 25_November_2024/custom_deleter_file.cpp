// #include <iostream>
// #include <memory>
// #include <cstdio> // For FILE operations

// int main() {
//     // Custom deleter for file handles
//     auto fileDeleter = [](FILE* file) {
//         if (file) {
//             std::cout << "Closing file...\n";
//             fclose(file);
//         }
//     };

//     // Using unique_ptr with a custom deleter
//     std::unique_ptr<FILE, decltype(fileDeleter)> filePtr(fopen("example.txt", "w"), fileDeleter);

//     if (filePtr) {
//         std::cout << "Writing to file...\n";
//         fprintf(filePtr.get(), "Hello, World!\n");
//     }

//     // File is automatically closed when `filePtr` goes out of scope
//     return 0;
// }


#include <iostream>
#include <cstdio>

int main() {
    // Open the file for writing
    FILE* file = fopen("example.txt", "w");
    if (!file) {
        std::cerr << "Failed to open file." << std::endl;
        return 1; // Exit with an error code
    }

    // Write to the file
    std::cout << "Writing to file." << std::endl;
    fprintf(file, "Hello, World!\n");

    // Close the file and check for errors
    if (fclose(file) != 0) {
        std::cerr << "Failed to close the file!" << std::endl;
        return 1; // Exit with an error code
    }

    std::cout << "File successfully closed." << std::endl;
    return 0;
}
