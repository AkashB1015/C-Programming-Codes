/*Q-2 Use the array in problem 1 to store 6 
integers entered by the user.*/
 #include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
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