#include <stdio.h>

int main(){
    
    int marks[] = {12, 34, 53, 66};

    int* ptr = &marks[0];
    //int8 ptr = marks;

    for (int  i = 0; i < 4 ; i++)
    {
        // printf("\n the marks of index %d is %d ",i,marks[i]);
        printf("\n the marks of index %d is %d ",i,*ptr);
        ptr++;
    }
    
    return 0;
}