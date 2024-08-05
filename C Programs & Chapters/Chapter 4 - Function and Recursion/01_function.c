#include <stdio.h>

int sum(int , int); // function prototype

int sum( int x , int  y)
{
    printf("\n The sume is : %d",x+y);

    return x+y;

}
int main()
{
    int a = 12;
    int b = 12;

    sum(a,b);  // function call

    int a1 = 21;
    int b1 = 23;

    sum(a1,b1);  // function  call

    return 0;
}