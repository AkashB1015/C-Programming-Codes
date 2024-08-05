#include<stdio.h>
int main()
{
    int l,b,a;

    printf("Enter the length :"); 
    scanf("%d",&l);

    printf("Enter the Breadth :");
    scanf("%d",&b);

    a = l * b ;     //formula : (l * b )

    printf("area of rectangle is :%d",a);

    return 0;

}