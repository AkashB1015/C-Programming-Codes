#include<stdio.h>
int main()
{
    int a , b;

    printf("\n Enter the values  :");
    scanf("%d%d",&a,&b);

    a += b;
    printf("\n a+=b is :%d",a);

    a -= b;
    printf("\n a-=b is : %d",a);

    a /= b;
    printf("\n a/=b is :%d",a);

    a %= b;
    printf("\n a%=b is :%d",a);

    a != b;
    printf("\n a!=b is :%d",a);

    a <<= b;
    printf("\n a<<= is :%d",a);

    a >>= b;
    printf("\n a>>= is :%d",a);

    a &= b ;
    printf("\n a&=b is :%d",a);

    a |= b ;
    printf("\n a|=b is :%d",a);

    return 0;
    
}