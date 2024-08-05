 /*Q-3 Solve problem 1 using calloc().*/
 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 43;

   printf("\n  Enter the elements :");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        
    printf("%d\n ",ptr[i]);
    }
    
    return 0; 
}