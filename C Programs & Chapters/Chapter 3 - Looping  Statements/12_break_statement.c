#include <stdio.h>

int main(){
    int a= 15;

    for (int i = 0; i < a; i++)
    {
         if (i == 5 )
         {
              break;  // exit the loop
         }
        printf("\n %d",i);  
       
    }
    printf("\n loop is Done !");
    return 0;
}