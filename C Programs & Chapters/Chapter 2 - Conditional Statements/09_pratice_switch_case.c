#include <stdio.h>

int main(){
    
    int a,b,c,ch;

    printf("\n Enter the no A:");
    scanf("%d",&a);

    printf("\n Enter the no B:");
    scanf("%d",&b);

    printf("\n -------Menu------- ");
    printf("\n1.  Addition       :");
    printf("\n2.  Subtraction    :");
    printf("\n3.  Multiplication :");
    printf("\n4.  Division       :");
    printf("\n Enter Your Choice :");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        c = a + b;
        printf("Addition of Two No:%d",c);
        break;
    
    case 2:
        c = a - b;
        printf("Subtraction of Two NO :%d",c);
        break;

    case 3:
        c = a * b;
       printf("Multiplication of Two No :%d",c);
       break;

    case 4:
        c = a / b;
        printf("Division of Two no :%d",c);
        break;
       
    default:
        printf("--- invalid --- ");
    
    }
    
    return 0;
}