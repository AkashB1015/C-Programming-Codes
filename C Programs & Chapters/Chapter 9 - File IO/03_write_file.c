#include <stdio.h>
int main()
{

FILE *fptr;
fptr = fopen("main1.txt", "w"); 
int num = 432;
fprintf(fptr, "%d", num);
fclose(fptr);

    return 0;
}