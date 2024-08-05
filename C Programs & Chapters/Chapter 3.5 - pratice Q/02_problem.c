
/* Q-Write a program to print multiplication table of 10 in reversed
 order.*/

#include <stdio.h>
int main()
{
    
    int n;

    printf("\n Enter the no to print reverse table :");
    scanf("%d",&n);

    for (int i = 10 ; i ; i--)
    {
      printf("\n %d X %d = %d", n, i, n * i );      
    }
    
    return 0;
}