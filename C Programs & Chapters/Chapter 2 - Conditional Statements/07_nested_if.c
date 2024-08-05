#include <stdio.h>

int main() {
    int a, b, c;

    printf("\nEnter the three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b) 
    {
        if (a > c) 
        {
            printf("\na is the greatest: %d", a);
        } 
        else 
        {
            printf("\nc is the greatest: %d", c);
        }
    }
     else
    {
        if (b > c) 
        {
            printf("\nb is the greatest: %d", b);
        } 
        else
        {
            printf("\nc is the greatest: %d", c);
        }
    }

    return 0;
}
