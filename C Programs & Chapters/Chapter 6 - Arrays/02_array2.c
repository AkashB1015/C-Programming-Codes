#include <stdio.h>

int main(){
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n the marks at index %d is :%d",i,marks[i]);

    }
    
    
    return 0;
}