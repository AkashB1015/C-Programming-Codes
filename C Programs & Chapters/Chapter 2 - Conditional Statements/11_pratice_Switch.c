#include<stdio.h>
int main()
{
    int a,b,c,ch;

  printf("\n Enter the no A: ");
  scanf("%d",&a);

  printf("\n Enter the No B:  ");
  scanf("%d",&b);

  printf("\n ----- menu -----");
  printf("\n1.     Addition   ");
  printf("\n2.     Multiplaction ");
  printf("\n3.     Subtraction   ");
  printf("\n4.     Divsion ");

  printf("\n Enter the Your Choice :");
  scanf("%d",&ch);

  switch (ch)
  {
  case 1:
     c = a + b;
    printf("\n Addition of two no is :%d",c);
    break;
  
  case 2:
    c = a * b;
    printf("\n Multipaction of no  is : %d",c);
    break;

  case 3:
    c = a - b;
    printf("\n Subtraction of no  is  :%d",c);
    break;

  case 4:
    c = a / b;
    printf("\n Division of no is :%d",c);
    break;

 default:
   printf("\n ====== Invalid Choice ====== ");

   
  }

}