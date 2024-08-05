/*Q-4 Write a program to illustrate the use of
arrow operator → in C.*/

#include <stdio.h>
typedef struct employee
{
    int salary;
    float score;

} Employee;

int main()
{
    Employee e1;
    Employee *ptr = &e1;
    // (*ptr1).salary = 56; Both are same
    ptr->salary = 56;
    ptr->score = 45.3;
    printf("\n the value pf salary is : %d and the value of score is : %.1f", ptr->salary, ptr->score);
    return 0;
}