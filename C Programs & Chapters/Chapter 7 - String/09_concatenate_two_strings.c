 #include <stdio.h>
 #include<string.h>

 int main(){

     char st[] = "Akash";
      char s1[30] = "Hello";
      char s2[30] = " Fine";

    char target[30];
    strcpy(target,st); 
   // printf("%s  %s",st,target);
 
   strcat(s1, s2);
   printf("%s", s1);

  // strcmp 
  int a = strcmp("far","ajokes");
  printf(" %d ", a);
    return 0;
 }