#include <stdio.h>

int main(){
    
    int a,r,l,b,c,ch;

    printf("\n Enter the no R :");
    scanf("%d",&r);

    printf("\n Enter the no L :");
    scanf("%d",&l);

    printf("\n Enter the no B :");
    scanf("%d",&b);

    printf("\n ----- menu -----");
    printf("\n1.  Square if value   ");
    printf("\n2.  Area of Rectangle ");
    printf("\n3.  Area of Circle    ");
    printf("\n4.   Even and Odd     ");

    printf("\n Enter the  your choice   :");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        a = r * r;
        printf("\n Square of a value :%d",a);
        break;
    
    case 2:
       a = l * b;
       printf("\n Area of Rectangle :%d",a);
       break;
    
    case 3:
      c = 3.14 * r * r;
      printf("\n Area of Circle :%d",c);
      break;
    
    case 4:
      if (r%2 == 0)
      {
        printf("\n This is Even no :");
      }
      else
      {
        printf("\n This is Odd no :");

      }

      default:
      printf("\n ====== Invalid choice ====== ");
    }

    return 0; 
}