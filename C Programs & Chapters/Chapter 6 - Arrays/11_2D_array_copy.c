#include <stdio.h>

int main(){
    
    int arr[2][3][4];  // 2D array declaration

    // Input values into the array
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           for (int k = 0; k < 4; k++)
           {
               printf("Enter the value for arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
           }
           
        } 
    }

    // Display values of the array
    printf("\nThe values in the 3D array are:\n");
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           for (int k = 0; k < 4; k++)
           {
               printf("%d ", arr[i][j][k]); 
           }
           printf("\n");
        } 
        printf("\n");  // Print a newline after each row
    }
    
    return 0;
}
