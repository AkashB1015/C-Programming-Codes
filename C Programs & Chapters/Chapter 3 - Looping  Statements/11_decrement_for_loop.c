#include <stdio.h>

int main(){
    //  Write a program to print ‘n’ natural numbers in reverse order.
    
    int n = 12;

    for (int i = n; i; i--)
    {
       printf("\n Reverse no decrement order : %d ",i);
    }
    
    return 0;
}