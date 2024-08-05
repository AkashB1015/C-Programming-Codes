/*Q-4 Create an array dynamically capable of storing 5
 integers. Now use realloc so that it can now store 10
 integers.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 43;

    printf("\n  Enter the elements :");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
   printf("\n the array is :");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n ", ptr[i]);
    }
    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
 
   printf("\n  Enter the elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
   printf("\n the array is :");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n ", ptr[i]);
    }
    return 0;
}