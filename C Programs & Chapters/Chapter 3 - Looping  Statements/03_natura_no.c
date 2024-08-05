 #include <stdio.h>

/*Ǫuick Ǫuiz: Write a program to print natural numbers from 10 to 20 
when initial loop counter is initialized to 0.
The loop counter need not be int, it can be float as well.
*/

 int main()
 { 
      int i = 0;
      
      while (i <= 20)
      {
        if (i >= 10)
        {
          printf("\n The value of I is :%d",i);
        }
        i++;
      }
      
    return 0;
 }