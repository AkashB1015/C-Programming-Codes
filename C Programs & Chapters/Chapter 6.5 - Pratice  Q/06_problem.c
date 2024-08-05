/*Q-7 Create an array of size 3 x 10 containing multiplication
tables of the numbers 2,7 and 9 respectively.*/
#include <stdio.h>

int main()
{
    int arr[3][10];
    int mul[3] = {2, 7, 9};  

   
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

   
    for (int i = 0; i < 3; i++)
    {
         printf("Multiplication table for %d:\n", mul[i]);
        for (int j = 0; j < 10; j++)
        {
           printf("The Table  is %d X %d = %d\n",mul[i],j+1,arr[i][j]);
           
        }
        printf("\n"); 
    }

    return 0;
}
