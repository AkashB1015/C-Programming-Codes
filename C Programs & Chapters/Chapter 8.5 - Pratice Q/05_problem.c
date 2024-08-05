/* Q-5 Create an array of 5 complex numbers created in Problem 5 and display them
 with the help of a display function. The values must be taken as an input from 
 the user. */
#include <stdio.h>

typedef struct complex {
    int real;
    int imaginary;
} Complex;

void display(Complex c) {
    printf("\nThe value of the complex number is: %d + %di", c.real, c.imaginary);
}

int main() {
    Complex carr[5];
    for (int i = 0; i < 5; i++) {
        printf("\nEnter the Real Part: ");
        scanf("%d", &carr[i].real);
        printf("Enter the Imaginary Part: ");
        scanf("%d", &carr[i].imaginary);
    }

    for (int i = 0; i < 5; i++) {
        display(carr[i]);
    }

    return 0;
}
