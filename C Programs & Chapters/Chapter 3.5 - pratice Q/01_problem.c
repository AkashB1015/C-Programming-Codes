#include <stdio.h>
//  Q1-Write a program to print multiplication table of a given number n.

int main(){
     int n;
     printf("\n Enter the no to print Table :");
    scanf("%d",&n);
     for (int i = 1; i < 10; i++)
     {
        printf("%d X %d = %d\n ", n, i, n * i);
     }
     
    return 0;
}