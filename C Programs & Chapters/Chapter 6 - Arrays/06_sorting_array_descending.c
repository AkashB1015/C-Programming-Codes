//  Descending order sorting array and user inputs.
#include <stdio.h>

int main(){
    
    int i,j,temp;
    int n,num[30];

    printf("\n Enter the no N : ");
    scanf("%d",&n);

  printf("\n Enter the numbers :");

  for (int  i = 0; i < n; i++)
  {
    scanf(" %d",&num[i]);
  }
  for (int  i = 0; i < n; i++)
  {
    for (int  j = +i; j < n; j++)
    {
        if (num[j] > num[i])
        {
            temp = num[i];
            num[i] = num[j];
            num[j] = temp;

        }
        
    }
    
  }
  printf("\n sorted array elements are :");
  for (int  i = 0; i < n; i++)
  {
     printf("%d\n ",num[i]);
  }
  
  
    return 0;
}