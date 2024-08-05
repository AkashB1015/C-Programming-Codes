#include <stdio.h>
#include <string.h>
int main()
// calculate the length of string user input input.
{
    char str[20];
    int length;

    printf("\n Enter the String :");
    gets(str);

   length = strlen(str);
    printf("\n Length of string is :%d",length);
    return 0;
}