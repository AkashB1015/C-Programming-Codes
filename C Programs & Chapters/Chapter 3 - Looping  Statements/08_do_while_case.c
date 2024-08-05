#include <stdio.h>

int main() {
    int num;
    char a = 'y';

    do {
        printf("\nEnter 1-Monday, 2-Tuesday, 3-Wednesday, 4-Thursday, 5-Friday, 6-Saturday, 7-Sunday: ");
        scanf("%d", &num);

        switch (num) {
            case 1:
                printf("\nMonday is a working day.");
                break;
            case 2:
                printf("\nTuesday is a working day.");
                break;
            case 3:
                printf("\nWednesday is an exam day.");
                break;
            case 4:
                printf("\nThursday is a working day.");
                break;
            case 5:
                printf("\nFriday is a practical day.");
                break;
            case 6:
                printf("\nSaturday is a holiday.");
                break;
            case 7:
                printf("\nSunday is a holiday.");
                break;
            default:
                printf("\nOut of reach.");
        }

        printf("\nIf you want to search again, enter 'y' or 'n': ");
        scanf(" %c", &a); // Changed %d to %c and added a space before %c

    } 
    while (a == 'y');

    return 0;
}
