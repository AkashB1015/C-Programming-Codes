#include <stdio.h>

int main()
{
    int a, b,c, ch;

    printf("\n Enter the no A :");
    scanf("%d", &a);

    printf("\n Enter the no B :");
    scanf("%d", &b);

    printf("\n ----Menu---- ");
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
            printf("\n Addition is : %d", c);
            break;

        case 2:
            c = a - b;
            printf("\n Subtraction is : %d", c);
            break;


        case 3:
            c = a * b;
            printf("\n Multiplication is : %d", c);
            break;

        case 4:
            if (b != 0) {
                c = a / b;
                printf("\n Division is : %d", c);
            } else {
                printf("\n Division by zero is not allowed");
            }
            break;

        default:
            printf("\n -- Invalid Choice --");
            break;
    }

    return 0;
}
