/* Q-1.	Write a program to print the address of a variable.
Use this address to get the value of the variable.*/
#include <stdio.h>

int returning_5(int* ptr)
{
    printf("\n the value of ptr is :%d",ptr);
    printf("\n the value of ptr is :%d",*ptr);
}
int main(){
    
    int i = 2;
    int* ptr = &i;

    printf("\n the address of i is :%u",&i);
    returning_5(ptr);
    return 0;
}