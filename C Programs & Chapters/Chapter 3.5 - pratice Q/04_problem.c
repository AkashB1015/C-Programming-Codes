#include <stdio.h>
//Q-4 Write a program to implement program Q3 using ‘do-while’ loop.
int main()
{
    int i = 1;
    int sum = 0;
  do
  {

    sum += i;
    i++;

  }
  while(i <= 10);

  printf("\n sum of frist 10 natural is :%d",sum);

    return 0;
}