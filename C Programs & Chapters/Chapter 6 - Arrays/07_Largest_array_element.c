#include <stdio.h>

int main(){
    int arr[100],i,n,largest,sec_largest;
    
    printf("\n Enter the size of array:");
    scanf("%d",&n);

    printf("\n Enter the array elements:");

for (int i = 0; i < n; i++)
  {
    scanf("%d",&arr[i]);
  }
  
largest = arr[i];
sec_largest = arr[i];

for (int  i = 0; i < n; i++)
   {
      if (arr[i] > largest)
      { 
         sec_largest = largest;
         largest = arr[i];
   
      }
      else if (arr[i] > sec_largest && arr[i] != largest)
      {
       sec_largest = arr[i];
   
      }
       
   }
printf("\n largest element %d is :%d",largest,sec_largest);   
    return 0;
}