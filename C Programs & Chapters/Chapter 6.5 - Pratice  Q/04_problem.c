/*Q-4 Write a program containing a function which reverses the array passed to it.*/

#include <stdio.h>

int printArray(int a[],int n)
{
   for (int i = 0; i < n; i++)
     {
       printf(" %d",a[i]);
     }
   printf("\n");
}

int   reverse(int arr[],int n)
{

 /*for  i from o to n/2
 arr[i]  arr[n-i-1]
 */ 
int temp;
  for (int i = 0; i < n/2 ; i++)
  {
    temp = arr[i];
    arr[i] = arr[n-i-1];
   arr[n-i-1] = temp;
  }
  
}

int main(){
    int arr[]={1,2,3,4,5,6};
    printArray(arr,6);
    reverse(arr,6);
    printArray(arr,6);
    return 0;
}