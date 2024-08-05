#include <stdio.h>

// Q-9 Write a program to check whether a given number is prime or not using loops.
int main() {
    int n, i = 2; // Initialize i to 2
    int not_prime = 0;

    printf("\n Enter the number to check if it is prime: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) {
        not_prime = 1; // 0 and 1 are not prime numbers
    } else {
        do {   
            if (n % i == 0 && n != 2) {
                not_prime = 1;
                break;
            }
            i++;
        } while (i < n);
    }

    if (not_prime) {
        printf("\n This number is not prime: %d\n", n);
    } else {
        printf("\n This number is prime: %d\n", n);
    }

    return 0;
}
