// #include <stdio.h>
// struct employee
// {
// int code; 
// char name[10];
// float salary;
// }; 
// int main(){
//     struct employee facebook[100];
//     facebook[0].code = 77;
//     facebook[1].code = 101;

//     return 0;
// }
#include <stdio.h>
#include <string.h>  // Include this header for strcpy

struct employee {
    int code; 
    char name[10];
    float salary;
}; 

int main() {
    struct employee facebook[100];

    // Initializing the first employee
    facebook[0].code = 77;
    strcpy(facebook[0].name, "Alice");
    facebook[0].salary = 50000.50;

    // Initializing the second employee
    facebook[1].code = 101;
    strcpy(facebook[1].name, "Bob");
    facebook[1].salary = 60000.75;

    // Printing the details of the employees
printf("Employee 1: Code = %d, Name = %s, Salary = %.2f\n", facebook[0].code, facebook[0].name, facebook[0].salary);
printf("Employee 2: Code = %d, Name = %s, Salary = %.2f\n", facebook[1].code, facebook[1].name, facebook[1].salary);

    return 0;
}

