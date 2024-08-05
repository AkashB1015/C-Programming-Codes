/*Q-7 Write a program to count the occurrence of a given 
character in a string.*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Ifmmp!zipx!bsf!zpv";
    int count = 0;
    char c ='z';

    for(int i = 0; i < strlen(str); i++)
     {
       if(str[i] == c )
       {
         count++;
       }
    }
    printf("%d", count);
    return 0;
}
