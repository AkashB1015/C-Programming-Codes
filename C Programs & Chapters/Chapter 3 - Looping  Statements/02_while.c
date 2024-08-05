#include <stdio.h>

int main(){
    
    int a;
    int i = 0;
    printf("\n Enter the value upto which you print :");
    scanf("%d",&a);

    while (i <= a)
    {
         printf("\n %d",i);
    i++;
    }
    
    return 0;
}