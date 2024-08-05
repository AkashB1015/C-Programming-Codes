//Q - 5.	Write a recursive function to calculate the sum of first ‘n’ natural numbers.    

#include <stdio.h>
    //formula --> sum(n) : 1 + 2 + 3 + 4 + 5 .... n-1 + n
 int sum_natural(int);
 int sum_natural(int n)
{
    if (n == 1)
    {
      return 1;

    }
    return sum_natural(n-1) + n;
}

int main()
{
    printf("\n The sum of 5 natural number is :%d ",sum_natural(6));
    return 0;
}