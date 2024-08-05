#include <stdio.h>

int main(){
    
    int a;

    printf("Enter the your age :");
    scanf("%d",&a);

    if (a >= 20)
    {
        printf("Your age is Eligible for voting ");

    }
    else
    {
        printf("your age is not Eligible for voting ");

    }
    
    return 0;
}