// #include <iostream>
// #include <cstring> // For standard string utilities (not used here for implementation clarity)
#include<bits/stdc++.h>
using namespace std;

// 1. String Length
int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// 2. String Copy
void stringCopy(char* destination, const char* source) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

// 3. String Concatenation
void stringConcat(char* destination, const char* source) {
    int destLength = stringLength(destination);
    int i = 0;
    while (source[i] != '\0') {
        destination[destLength + i] = source[i];
        i++;
    }
    destination[destLength + i] = '\0';
}

// 4. String Comparison
int stringCompare(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

// 5. String Reverse
void stringReverse(char* str) {
    int length = stringLength(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// 6. Substring Search
int findSubstring(const char* str, const char* substr) {
    int strLen = stringLength(str);
    int subLen = stringLength(substr);

    for (int i = 0; i <= strLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == subLen) {
            return i; // Found at index `i`
        }
    }
    return -1; // Not found
}

// 7. Find Character
int findCharacter(const char* str, char ch) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            return i; // Found at index `i`
        }
        i++;
    }
    return -1; // Not found
}

// 8. Convert to Uppercase
void toUpperCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32; // Convert to uppercase
        }
        i++;
    }
}

// 9. Convert to Lowercase
void toLowerCase(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32; // Convert to lowercase
        }
        i++;
    }
}

// 10. Erase Character
void eraseCharacter(char* str, char ch) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; // Null-terminate the result
}

// 11. Substring Extraction
void extractSubstring(const char* str, int start, int length, char* result) {
    int i = 0;
    while (i < length && str[start + i] != '\0') {
        result[i] = str[start + i];
        i++;
    }
    result[i] = '\0';
}

// 12. String Insert
void insertSubstring(char* str, const char* substr, int position) {
    int strLen = stringLength(str);
    int subLen = stringLength(substr);

    // Shift the original string to make space for substr
    for (int i = strLen; i >= position; i--) {
        str[i + subLen] = str[i];
    }

    // Insert the substring
    for (int i = 0; i < subLen; i++) {
        str[position + i] = substr[i];
    }
}

// Test the implemented functions
int main() {
    char str1[100] = "Hello, ";
    char str2[100] = "World!";
    char result[100];

    // String Length
    cout << "Length of str1: " << stringLength(str1) << endl;

    // String Copy
    stringCopy(result, str2);
    cout << "Copied string: " << result << endl;

    // String Concatenation
    stringConcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;

    // String Comparison
    cout << "Comparison result: " << stringCompare("ABC", "ABD") << endl;

    // String Reverse
    stringReverse(result);
    cout << "Reversed string: " << result << endl;

    // Substring Search
    cout << "Substring position: " << findSubstring("Hello, World!", "World") << endl;

    // Find Character
    cout << "Character position: " << findCharacter("Hello, World!", 'W') << endl;

    // Convert to Uppercase
    char str3[100] = "hello";
    toUpperCase(str3);
    cout << "Uppercase string: " << str3 << endl;

    // Convert to Lowercase
    toLowerCase(str3);
    cout << "Lowercase string: " << str3 << endl;

    // Erase Character
    char str4[100] = "Hello, World!";
    eraseCharacter(str4, 'l');
    cout << "String after erasing 'l': " << str4 << endl;

    // Extract Substring
    extractSubstring("Hello, World!", 7, 5, result);
    cout << "Extracted substring: " << result << endl;

    // Insert Substring
    char str5[100] = "Hello World!";
    insertSubstring(str5, "Beautiful ", 6);
    cout << "String after insertion: " << str5 << endl;

    return 0;
}
