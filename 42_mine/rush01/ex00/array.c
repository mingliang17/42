#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size; // Initialize size
    int row;
    int col;

    row = 0;  

    // Allocate memory for the array of row pointers
    char **array = (char **)malloc(size * sizeof(char *));
    
    // Allocate memory for each row
    while (row < size)
    {
        array[row] = (char *)malloc(size * sizeof(char));
        row++;
    }

    row = 0;  // Reset row to 0 before filling the array and printing

    // Fill the array and print it
    while(row < size)
    {
        col = 0;
        while(col < size)
        {
            array[row][col] = col + '0';  // Assign values as chars ('0', '1', '2', ...)
            printf("%c", array[row][col]);  // Print the value right after assigning
            if (col < size -1)
            {
                printf("%s"," ");
            }
            col++;
        }
        printf("\n");  // Print new line after each row
        row++;
    }

    // Free allocated memory
    row = 0;
    while (row < size)
    {
        free(array[row]);  // Free each row
        row++;
    }
    free(array);  // Free the array of pointers

    return 0;
}
