#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the Two Value :");
    scanf("%d %d",&a,&b);

    c = a/b ;
    printf("\n Division of Two no :%d",c);

    c = a % b ;
    printf("\n Mode of Two no :%d",c);

    a++;

    printf("\n Increment of value A : %d",a);

    b--;

    printf("\n Decrement of value B :%d",b);

    return 0;



}