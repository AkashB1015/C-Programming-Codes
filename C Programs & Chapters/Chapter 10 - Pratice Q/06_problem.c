/*Q-6.Attempt problem 4 using malloc().*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
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