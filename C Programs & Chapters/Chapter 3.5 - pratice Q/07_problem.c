/*Q-7 Write a program to calculate the factorial of
 a given number using a for loop.*/

#include <stdio.h>
int main()
{
    int fact = 1;
    int num;

    printf("\n Enter The No To Find Factorial :");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("\n The Factorial of This No Is : %d",fact);
    return 0;
}