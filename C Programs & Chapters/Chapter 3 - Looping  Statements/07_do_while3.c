#include <stdio.h>

int main() {
    int p, n;
    char a = 'y';
    float r, IS;

    do
    {
        printf("\nEnter the principal (p), rate of interest (r), and time (n): ");
        scanf("%d %f %d", &p, &r, &n);

        IS = (p * r * n) / 100;
        printf("\nSimple Interest (IS) = %.2f\n", IS);

        printf("\nCalculate more? Type 'y' for yes and 'n' for no: ");
        scanf(" %c", &a); // Notice the space before %c to consume any leftover newline character

    } while (a == 'y');
    
    return 0;
}
