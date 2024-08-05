#include <stdio.h>

int main() 
{
    
    int a,b,c;

    printf("Enter the three no :");
    scanf("%d%d%d",&a,&b,&c);

    if ( a>b && a>c )
      {  
          printf("\n a is greater than b and c ");
      }
    else if (b>a && b>c)
      {
          printf("\n b is greater than a and c ");
      }
    if (c>a && c>b)
      {
         printf("\n c is greater than a and b");
  
      }
    else
     {
          printf("\n a and b and c are Equal ");
     }   
    

 
    return 0;
}