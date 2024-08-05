#include <stdio.h>
#include <string.h>

typedef struct employee
{
   int code;
   char name[10];
   float salary;
} Emp;

int main()
{
   Emp e1;
   e1.code = 4511;

   strcpy(e1.name, "Akash");
   e1.salary = 54.44;

   printf("%d %f %s", e1.code, e1.salary, e1.name);

   return 0;
}
