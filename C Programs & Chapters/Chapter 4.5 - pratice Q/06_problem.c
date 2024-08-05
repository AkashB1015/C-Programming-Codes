/* Q-6 	Write a program using function to print the following pattern
(first n lines)
*
* * *
* * * * *

*/
#include <stdio.h>

int main()
{
    int n = 3;
   // no_of_star = (2*i+1)
    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
       printf("\n"); 
    }

    return 0;
}