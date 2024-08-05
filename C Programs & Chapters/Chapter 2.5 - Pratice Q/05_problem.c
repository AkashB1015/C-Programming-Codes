/*5. Write a program to determine whether
a character entered by the user is lowercase or not.*/ 
#include <stdio.h>

int main(){    // ASCII Value 
    // 97 and 122
    char ch = 'a';
    printf("\n the character is :%c",ch);
    printf("\n the value of character is :%d",ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("\n This character is lowercase ");
    }
    else
    {
        printf("\n This character is not lowercaes ");
    }
    
    return 0;
}