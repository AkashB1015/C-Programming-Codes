#include <stdio.h>

int main(){
    int a = 14;

    for (int  i = 1; i < a; i++)
    {
        if (i == 5)
        {
           continue; // skip the iteration 
        }
        printf("\n %d",i);
    }
    printf("\n loop is Done ! ");
    return 0;
}