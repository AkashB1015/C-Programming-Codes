 #include <stdio.h>
 //  '\0'    Null character string and end the string. 
 
 int main(){
    
    //  char st[] = {'a','b','c','\0'};  // Both are the same 
   char st[] = "Akash";
     for (int  i = 0; i < 5; i++)
     {
        printf("\n The frist character is :%c",st[i]); 
     }
     
   
    return 0;
 }