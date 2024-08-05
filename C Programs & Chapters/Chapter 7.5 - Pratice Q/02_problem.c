 /*Q-2 Write your own version of 
 strlen function from <string.h> */
 
#include <stdio.h>
 #include<string.h>
 int strlen1(char str[])
 {
    int i=0,count;
    char c = str[i];
    while (c != '\0')
    {
      c = str[i];
      i++;
    }
    count = i-1;
    return count;
    
   }
 int main(){
     char str[] ="Akash";
    
    printf("%d",strlen(str));

    return 0;
 }