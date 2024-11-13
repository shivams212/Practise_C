// RAII (Resource Acquisition Is Initialization)

#include <iostream>
#include <cstdio>
#include <stdexcept>

class FileHandle {
private:
    FILE* file; // Pointer to the file resource

public:
    // Constructor: Opens the file
    FileHandle(const char* filename, const char* mode) {
        file = fopen(filename, mode);
        if (!file) {
            throw std::runtime_error("Failed to open file");
        }
        std::cout << "File opened: " << filename << std::endl;
    }

    // Destructor: Closes the file
    ~FileHandle() {
        if (file) {
            fclose(file);
            std::cout << "File closed." << std::endl;
        }
    }

    // Accessor to get the raw FILE* pointer
    FILE* get() const {
        return file;
    }
};

// Function that uses RAII to manage file resource
void processFile(const char* filename) {
    try {
        FileHandle fileHandle(filename, "r"); // RAII ensures resource is managed
        char buffer[256];
        while (fgets(buffer, sizeof(buffer), fileHandle.get())) {
            std::cout << buffer; // Process file content
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }
}

int main() {
    const char* filename = "example.txt";
    processFile(filename);
    return 0;
}
