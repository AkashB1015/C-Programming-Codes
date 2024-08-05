#include <stdio.h>
int swap(int* a , int* b);
int swap(int* a , int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4, b = 6; 
    swap(&a,&b);  
    printf("\n the value of a is %d and the value b %d",a,b);
    return 0;
}