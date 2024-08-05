/*Q-4 Write a program with a structure representing a complex number.*/
#include <stdio.h>

typedef struct vector
{
  int real;
  int imaginary;
} Complex;

int main()
{
  struct vector v = {1, 2};
  printf("\n The value of complex number is : %d + %di", v.real, v.imaginary);

  return 0;
}