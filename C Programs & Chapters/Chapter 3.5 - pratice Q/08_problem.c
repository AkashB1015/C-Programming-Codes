/*Q-8 Write a program to calculate the factorial of
 a given number using a While loop.*/
 
#include <stdio.h>

int main(){
    
    int fact = 1;
    int i = 1;
    int num;
    printf("\n Enter The No To Find Factorial :");
    scanf("%d",&num);
    
    while (i<=num)
    {
       fact *= i;
       i++;

    }
     printf("\n The Factorial of This No Is : %d",fact);
    return 0;
}