// factorial of number 
#include <stdio.h>
int factorial(int);

int factorial (int n)
{
    if (n == 1 || n == 0 )
    {
        return 1;
    }
   return factorial(n - 1) * n ;
    // factorial(n) = factorial(n - 1) X n
}
int main()
{
    int a ;

    printf("\n Enter the no to calculate :");
    scanf("%d",&a);
    printf("\n The factorial is %d is : %d",a ,factorial(a));
    return 0;
}