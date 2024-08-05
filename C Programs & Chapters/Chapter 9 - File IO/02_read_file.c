#include <stdio.h>

int main()
{

    FILE *ptr;
    ptr = fopen("main.txt", "r");

    if (ptr == NULL)
    {
        printf("\n the file Does not exist sorry!");
    }
    
    int num;
  
  fscanf(ptr, "%d" ,&num);
  printf("\n The value of num is :%d",num);

  fscanf(ptr, "%d" ,&num);
  printf("\n The value of num is :%d",num);
  
  fclose(ptr);
    return 0;
}