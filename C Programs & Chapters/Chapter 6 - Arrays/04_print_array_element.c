 #include <stdio.h>
 
 int main()
 {
    int roll_no[5];
    int i;
    printf("\n Enter the array Elements :");
    
    for (int i = 0; i < 5; i++)
    {
         scanf("\n %d",&roll_no[i]);
    }
    for (int i = 0; i < 5 ; i++)
    {
        printf("\n Enlement at %d location = %d",i,roll_no[i]);

    }
    
    return 0;
 }