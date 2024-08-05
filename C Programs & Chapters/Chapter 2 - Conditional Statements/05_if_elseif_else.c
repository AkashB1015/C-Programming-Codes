#include <stdio.h>

int main(){
   int number;

   printf("Enter the Number :");
   scanf("%d",&number);

    if (number > 10)
    {
       printf("Number is greater than 10 \n ");

    }
    else if (number == 10)
    {
       printf("Number is exactly 10 \n ");

    }
    else {
        printf("Number is less than 10 \n ");
    }
    
    
    return 0;
}