#include <stdio.h>
int sum(int* a , int* b)
{
  *a = 6;
  return (*a + *b);  
}
int main(){
    int x = 1,y = 6;
    printf("\n the sum of 1 and 6 is %d",sum(&x,&y));
    printf("\n the value of x is :%d",x);
    return 0;
}