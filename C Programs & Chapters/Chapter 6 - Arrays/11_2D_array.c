#include <stdio.h>

int main(){
    
    int arr[3][2];  // 2D array declaration

    // Input values into the array
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\nEnter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        } 
    }

    // Display values of the array
    printf("\nThe values in the 2D array are:\n");
    for(int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);  // Print values with a space in between
        } 
        printf("\n");  // Print a newline after each row
    }
    
    return 0;
}
