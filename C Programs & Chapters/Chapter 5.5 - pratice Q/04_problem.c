/*Q-4 .Write a program using a function which calculates the sum
 and average of two numbers.Use pointers and print the values of 
 sum and average in main().*/
#include <stdio.h>

 int* sum(int a, int b)
  {

    int s = a+b;
    int* ptr = &s;
    printf("\n the sum is :%d",s);
    return ptr;

  }
 float* average(int a, int b)
  {

    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("\n the average is %f",avg);
    return ptr;
    
  }

int main()
{
    int x = 4;
    int y = 6;
   int* ptr1;
   float* ptr2;

  ptr1 = sum(x,y);
  ptr2 = average(x,y);
  printf("\n the address of sum is : %u and average is : %u",ptr1,ptr2);
    return 0;
}