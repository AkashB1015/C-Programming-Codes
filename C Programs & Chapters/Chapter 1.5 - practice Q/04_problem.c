// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.
#include <stdio.h>

int main(){
    
    float p = 34.1;
    int r = 8;
    int t = 5;

    printf("The value of simple interest is :%f",(p*r*t)/100);
   
    return 0;
}