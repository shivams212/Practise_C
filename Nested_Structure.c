#include<stdio.h>

// struct Person
// {
//     char name[50];
//     int SSID;
//     double salary;
//     struct Date
//     {
//         int day;
//         int mon;
//         int year;
//     };
//     struct Date DoB;
// };

struct Date
    {
        int day;//-2b to +2b
        int mon; //1 to 12
        int year; //4 difit ,9999
    };

// #pragma pack(1)  // Apply 1-byte alignment

// struct abc {
//     char a;   // 1 byte
//     int b; 
//     char c;   // 4 bytes
// };

// #pragma pack()  // Reset to default alignment

// int main() {
//     printf("Size of struct abc: %zu bytes\n", sizeof(struct abc));
//     return 0;
// }

// #pragma pack(1)  // Apply 1-byte alignment

struct Person {
    char ch;   
    double d; //8
    long long l; //8 
    int i; 
}; //size=32 without padding

// #pragma pack()  // Reset to default alignment

int main() {
    printf("Size of struct abc: %zu bytes\n", sizeof(struct Person));
    return 0;
}