/* Q-1.	Write a program using function to find average of three numbers.*/
#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a = 10, b = 5, c = 15;
    printf("The average of %d, %d, and %d is: %f\n", a, b, c, average(a, b, c));
    return 0;
}
