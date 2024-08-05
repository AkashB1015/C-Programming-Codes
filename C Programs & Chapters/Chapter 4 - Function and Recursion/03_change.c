#include <stdio.h>
int change(int a);

int change(int a)
{
    a = 77; //misnomer
}

int main(){
    
    int b = 22;

    change(b);  //  the value of b remains 22 
    
    printf("\n  b is :%d",b);

    return 0;
}