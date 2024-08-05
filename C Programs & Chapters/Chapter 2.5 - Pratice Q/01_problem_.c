#include <stdio.h>
/* 1	Write a program to determine whether a student has passed or failed. To pass, 
a student requires a total of 40% and at least 33% in each subject. Assume there are
three subjects and take the marks as input from the user.*/
int main(){
    
    int marks1, marks2, marks3;

    printf("\n Enter the marks1 :");
    scanf("%d", &marks1);

    printf("\n Enter the marks2 :");
    scanf("%d", &marks2);

    printf("\n Enter the marks3 :");
    scanf("%d", &marks3);

    printf("\n The marks are: %d, %d, and %d", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33) 
    {
        printf("\n You are failed due to less marks in one or more subjects.");
    } 
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("\n You have failed due to low average percentage.");
    } 
    else 
    {
        printf("\n You have passed.");
    }

    return 0;
}
