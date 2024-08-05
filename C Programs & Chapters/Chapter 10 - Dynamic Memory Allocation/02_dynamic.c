#include <stdio.h>
#include <stdlib.h>
int main()
{
    float n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 3.345;
    ptr[1] = 16.345;
    ptr[2] = 6.345;
    ptr[3] = 56.345;
    ptr[4] = 66.345;
    printf("\n %.2f", ptr[0]);
    printf("\n %.2f", ptr[1]);
    printf("\n %.2f", ptr[2]);
    printf("\n %.2f", ptr[3]);
    printf("\n %.2f", ptr[4]);
    return 0;
}