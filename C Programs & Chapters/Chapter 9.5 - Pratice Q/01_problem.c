/* Q-1 Write a program to read three integers from a file.*/
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("file.txt", "r");
    int num1,num2,num3;
    fscanf(fptr, "%d %d %d", &num1 ,&num2 ,&num3);
    printf("\n the value is :%d %d %d ",num1,num2,num3);
    fclose(fptr);

    return 0;
}