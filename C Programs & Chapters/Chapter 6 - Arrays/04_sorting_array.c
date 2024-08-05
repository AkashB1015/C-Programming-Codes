#include <stdio.h>

int main(){
    
    int a[10];
    int i,j,temp;

    printf("\n Enter the Element into array :");

    for (int  i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int  i = 0; i < 10; i++)
    {
        for (int j = +i; j <= 10; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("\n sorted array element are :");
    for (int  i = 0; i <= 10; i++)
    {
        printf("\n %d",a[i]);
    }
    return 0;
}