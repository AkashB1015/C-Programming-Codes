/*Q-2.	Write a program having a variable ‘i’. Print the address of ‘i’.
Pass this variable to a function and print its address. Are these
 addresses same? Why?*/
#include <stdio.h>

int main(){
    
    int i = 2;
    int* ptr = &i;

    printf("\n the address of i is :%u",&i);
    printf("\n the address of i is :%u",*ptr);
    return 0;
}