#include <stdio.h>

/*Write a program to find whether a year 
 entered by the user is a leap year or not. 
 Take year as an input from the user.*/ 
   
int  main()
 {
    int year;

    printf("\n Enter the Year :");
    scanf("%d",&year);
    if ((year %4==0 && year%100 !=0) || year %400==0)
    {
        printf("\n This is leaf year ");
    }
    else
    {
        printf("\n This is not Leaf year ");
    }
    return 0;
}