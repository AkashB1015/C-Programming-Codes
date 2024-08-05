#include <stdio.h>
// Q-9 Write a program to check whether a given number is prime or not using loops.
int main(){
    int n;
    int not_prime= 0;

    printf("\n Enter the no to check the prime :");
    scanf("%d",&n);
  
    if (n == 0 || n == 1)
    {
        not_prime = 1;

    }
    else
    {
        for (int  i = 2; i <  n; i++)
        {
           if (n % i == 0 && n != 2 )
           {
               not_prime = 1;
               break;
           }
           
        }
        
    }
    if (not_prime)
    {
        printf("\n This no is note prime :%d",n);
    }
    else
    {
        printf("\n This no is Prime :%d",n);
    }
    
    
    
    return 0;
}
