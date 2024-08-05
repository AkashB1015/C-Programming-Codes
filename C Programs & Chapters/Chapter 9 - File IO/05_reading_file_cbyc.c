#include <stdio.h>

int main()
{
     char ch;
      FILE *ptr;
    ptr = fopen("main.txt", "r");   
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break the loop!
        printf("%c",ch);
        if (ch == EOF)
        {
            break;
        }
        // code
    }

    return 0;
}