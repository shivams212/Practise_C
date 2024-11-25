// #include <stdio.h>


// struct Regular {
//     char a;  // 1 byte
//     int b;   // 4 bytes (usually)
//     char c;  // 1 byte
// };

// struct BitFieldStruct {
//     unsigned int a : 8; // 8 bits
//     unsigned int b : 8; // 8 bits
//     unsigned int c : 8; // 8 bits
//     unsigned int d : 8; // 8 bits
//     unsigned int e : 2; // 2 bits
// };

// // #pragma pack(1)
// struct abc{
//     char a;
//     int b;
//     char c;
// };

// struct abcd{
//     char  a;
//     char c;
//     int b;
// };

// struct Padded {
//     char a;      // 1 byte
//     int b;       // 4 bytes (needs padding)
//     char c;      // 1 byte
// };
 
// struct Unpadded {
//     char a;      // 1 byte
//     char c;      // 1 byte
//     int b;       // 4 bytes
// };

// int main() {
//     printf("Size of Regular struct: %zu bytes\n", sizeof(struct Regular));
//     printf("Size of BitFieldStruct: %zu bytes\n", sizeof(struct BitFieldStruct));
//     printf("Size of BitFieldStruct: %zu bytes\n", sizeof(struct abc));
//     printf("Size of BitFieldStruct: %zu bytes\n", sizeof(struct abcd));
//     printf("Size of BitFieldStruct: %zu bytes\n", sizeof(struct Padded));
//     printf("Size of BitFieldStruct: %zu bytes\n", sizeof(struct Unpadded));

//     return 0;
// }

// #include<stdio.h>

// struct ex{
//     char *engine;
// } ;

// int main()
// {
//     struct ex car1,car2;
    
//     car1.engine="DDis 190 Engine";
//     car2.engine="1.2 L Kappa Dual VTVT";
//     printf("%s\n",car1.engine);
//     printf("%s\n",car2.engine);
// }


//Local and Global Scope
// #include<stdio.h>

// //Global Scope
// struct employee{
//     char *name;
//     int age;
//     int salary;
// };

// //Local Scope
// int manager()
// {
//     struct employee manager;
//     manager.age=27;
//     if(manager.age>30)
//     manager.salary=65000;
//     else
//     manager.salary=55000;
//     return manager.salary;
// }

// //we can declare variable in local as well as local scope
// int main()
// {
//     struct employee emp1;
//     struct employee emp2;
//     printf("ENter the salary of employee1:");
//     scanf("%d",&emp1.salary);
//     printf("ENter the salary of employee2:");
//     scanf("%d",&emp2.salary);

//     printf("EMployee 1 salary is:%d\n",emp1.salary);
//     printf("EMployee 2 salary is:%d\n",emp2.salary);
//     printf("Manager's salary is:%d\n",manager());
// }

// // ENter the salary of employee1:11
// // ENter the salary of employee2:111
// // EMployee 1 salary is:11
// // EMployee 2 salary is:111
// // Manager's salary is:55000


// struct car{
//     char engine[50];
//     char fuel_type[10];
//     int fuel_tank_cap;
//     int seating_cap;
//     float city_mileage;
// };

// int main()
// {
//     struct car c1={"DDis 190 Engine","Diesel",37,5,19.74};
//     struct car c2={"DDis 190 Engine","Diesel",37,5,19.74};
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// struct bike{
//     char bike_name[40];
//     int release_year;
//     char owner_name[50];
//     float bike_price;
// };

// int main()
// {
//     struct bike b1;
//     // b1.bike_name="Bullet";//doubt

//     strcpy(b1.bike_name,"Bullet");
//     b1.bike_price=25.2;

//     printf("Bike price is: %f\n",b1.bike_price);
//     printf("Bike name is: %s",b1.bike_name);
//     return 0;
// }

//Declare Array of Structure
// #include<stdio.h>
// #include<string.h>

// struct car{
//     int fuel_tank_cap;
//     int seating_cap;
//     int mileage;

// };

// int main()
// {
//     // int n=2;
//     // printf("How many variable do you want to declare");
//     // scanf("%d",&n);

//     struct car c[2];
//     for(int i=1;i<=2;i++)
//     {
//         printf("Enter the car%d fuel tank capacity:",i);
//         scanf("%d",&c[i].fuel_tank_cap);
//         printf("Enter the car%d seating capacity:",i);
//         scanf("%d",&c[i].seating_cap);
//         printf("Enter the car%d city mileage:",i);
//         scanf("%d",&c[i].mileage);
//     }

//     // printf("\n");
//    for(int i=1;i<=2;i++)
//    {
//      printf("\nCar %d details :\n ",i);
//      printf("fuel tank capacity: %d\n",c[i].fuel_tank_cap);
//      printf("\nCar %d details :\n ",i);
//      printf("Car seating capacity: %d\n",c[i].seating_cap);
//      printf("\nCar %d details :\n ",i);
//      printf("Car mileage: %d\n",c[i].mileage);
//    }
    
// }

