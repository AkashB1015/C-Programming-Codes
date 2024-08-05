#include <stdio.h>
#include <string.h>
struct employee
{
int code; // This declares a new user defined data type! float salary;
char name[10];
float salary;
}; 

int main(){
  struct employee e1,e2,e3;
 printf("\n Enter the value of code   :");
 scanf("%d",&e1.code);

 printf("\n Enter the value of Salary :");
 scanf("%f",&e1.salary);

 printf("\n Enter the value of Name   :");
 scanf("%s",&e1.name);
 
 printf("\n %d %f %s",e1.code,e1.salary,e1.name);

//-------------intput 2---------------------------------------
 
 printf("\n Enter the value of code   :");
 scanf("%d",&e2.code);

 printf("\n Enter the value of Salary :");
 scanf("%f",&e2.salary);

 printf("\n Enter the value of Name   :");
 scanf("%s",&e2.name);

printf(" \n %d %f %s",e2.code,e2.salary,e2.name);
//-------------input 3---------------------------------------
 
 printf("\n Enter the value of code   :");
 scanf("%d",&e3.code);

 printf("\n Enter the value of Salary :");
 scanf("%f",&e3.salary);

 printf("\n Enter the value of Name   :");
 scanf("%s",&e3.name);

printf("\n %d %f %s",e3.code,e3.salary,e3.name);
  
  
  
    return 0;
}