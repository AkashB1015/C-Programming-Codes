#include <stdio.h>
//Q-5 Write a program to implement program Q4 using ‘for’ loop 
int main(){
    int sum = 0;

    for (int i = 0; i <= 10; i++)
    {
        sum += i;

    }
     printf("\n sum of frist 10 natural is :%d",sum);
    return 0;
}