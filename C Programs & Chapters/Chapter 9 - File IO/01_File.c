#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("main.txt", "r");
    int num;
  
  fscanf(ptr, "%d" ,&num);
  printf("\n The value of num is :%d",num);

  fscanf(ptr, "%d" ,&num);
  printf("\n The value of num is :%d",num);
  
    return 0;
}