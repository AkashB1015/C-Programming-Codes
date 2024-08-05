/*Q-1 Write a program to dynamically create an array of size 6
 capable of storing 6 integers.*/
 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 43;
    printf("%d\n ", ptr[0]);

    return 0; 
}