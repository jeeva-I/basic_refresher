/*******************************************************************************
 * Name        : Jeeva
 * Date        : 12/09/2026
 * Description : Generate a magic square using dynamic memory allocation
 * ****************************************************************************/

// Header file inclusion
#include <stdio.h>
#include <stdlib.h>

// Function prototype
void magic_square(int **matrix, int num);

//Main program starts here()
int main()
{
    // Declaration
    int num;
    int **matrix;
    int i;

    // Read the positive odd number
        //printf("Enter a positive odd number: ");
        scanf("%d", &num);

        // // Check whether the number is valid
        if(num <= 0 || num % 2 == 0)
         {
            printf("Error : Please enter only positive odd numbers\n");
        }

    else
    {
    // Allocate memory for row pointers
    matrix = calloc(num, sizeof(int *));

    // Check memory allocation
    if(matrix == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Allocate memory for each row
    for(i = 0; i < num; i++)
    {
        matrix[i] = calloc(num, sizeof(int));

        // Check memory allocation
        if(matrix[i] == NULL)
        {
            printf("Memory allocation failed\n");

            // Free already allocated rows
            while(i > 0)
            {
                i--;
                free(matrix[i]);
            }

            free(matrix);
            return 1;
        }
    }

    // Generate the magic square
    magic_square(matrix, num);

    // Free the allocated memory
    for(i = 0; i < num; i++)
    {
        free(matrix[i]);
    }

    free(matrix);
}
    return 0;
}

void magic_square(int **matrix, int num)
{
    // Declaration
    int row;
    int col;
    int next_row;
    int next_col;
    int value;
    int i;
    int j;

    // Start from first row and middle column
    row = 0;
    col = num / 2;

    // Insert numbers from 1 to n*n
    for(value = 1; value <= num * num; value++)
    {
        // Store the current number
        matrix[row][col] = value;

        // Move one row up and one column right
        next_row = row - 1;
        next_col = col + 1;

        // Wrap around when row goes outside
        if(next_row < 0)
        {
            next_row = num - 1;
        }

        // Wrap around when column goes outside
        if(next_col >= num)
        {
            next_col = 0;
        }

        // Check whether the next position is occupied
        if(matrix[next_row][next_col] != 0)
        {
            // Move one row down from current position
            row++;

            // Wrap around when row goes outside
            if(row >= num)
            {
                row = 0;
            }
        }
        else
        {
            // Move to the calculated position
            row = next_row;
            col = next_col;
        }
    }

    // Print the magic square
    printf("\nMagic Square:\n");

    for(i = 0; i < num; i++)
    {
        for(j = 0; j < num; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}
