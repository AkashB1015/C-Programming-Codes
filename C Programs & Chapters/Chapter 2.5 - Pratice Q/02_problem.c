#include <stdio.h> 


int main(){             // Studemt grade c program 
    
    int marks;

    printf("\n Enter your Marks :");
    scanf("%d",&marks);

    if (marks <= 100 && marks >= 90)
    {
      printf("\n Gread A ");
    }
    else if (marks <= 90 && marks >= 80)
    {
      printf("\n Gread B ");
    }
    else if (marks <= 80 && marks >= 70)
    {
      printf("\n Gread C ");
    }
    else if (marks <= 70 && marks >= 60)
    {
      printf("\n Gread D ");
    }
    else if (marks <= 60 && marks >= 50)
    {
      printf("\n Gread E ");
    }
    else
    {
      printf("\n Gread F ");
    }
    
    return 0;
}