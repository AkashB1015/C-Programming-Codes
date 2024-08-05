#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;

    // printf(" %d", (*ptr).code);

    printf(" %d", ptr->code); // Both are same (*ptr)
    return 0;
}