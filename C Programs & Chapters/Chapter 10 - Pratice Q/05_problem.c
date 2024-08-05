/*Q-5 Create an array of multiplication table
of 7 upto 10 (7 x 10 = 70). Use realloc to
make it store 15 number (from 7 x 1 to 7 x 15).
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 43;

    printf("\n  Enter the elements :");

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
    }
    printf("\n the array is :");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n ", ptr[i]);
    }
//-----------------------------------------------------------------
    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));

    printf("\n  Enter the elements :");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i+1);
    }
    printf("\n the array is :");
    for (int i = 0; i < n; i++)
    {

        printf("%d\n ", ptr[i]);
    }
    return 0;
}