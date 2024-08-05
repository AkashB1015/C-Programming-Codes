/*Q-3.Write a program to change the value
 of a variable to ten times of its current value.*/
#include <stdio.h>
 int change_to_thirty_times(int* a);
  int change_to_thirty_times(int* a)
  {
    *a = *a * 30;
  }

int main(){
    int x = 45;
    printf("\n the value of  x is :%d",x);
    change_to_thirty_times(&x);
    printf("\n the value of x is :%d",x);
    return 0;
}