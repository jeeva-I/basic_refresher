/*******************************************************************************
 * Name:JEEVA
 * Date: 12/09/2026
 * Description: Find average for fragmented array elements in each row
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>
#include <stdlib.h>

//Function prototype
void fragments(int, float *[], int[]);

//Main program starts here()
int main()
{
    //Declaration
    int row;

    //getting the row from the user
    printf("Enter the row: ");
    scanf("%d", &row);

    //declaring array of pointer
    float *arr[row];

    //declaring column array
    int col[row];

    //Function call
    fragments(row, arr, col);

    return 0;
}

//Function definition
void fragments(int row, float *arr[], int col[])
{
    //Declaration
    int i, j;
    float sum;
    float *temp;
    int temp_col;

    //getting column size for each row
    printf("Enter the column: ");
    for(i = 0; i < row; i++)
    {
        scanf("%d", &col[i]);
    }

    //allocating memory and getting elements
    for(i = 0; i < row; i++)
    {
        //initializing sum
        sum = 0;

        //DMA for each row
        arr[i] = calloc(col[i] + 1, sizeof(float));

        //validation
        if(arr[i] == NULL)
        {
            printf("Memory is not allocated\n");
            return;
        }

        //getting arr[i] elements
        for(j = 0; j < col[i]; j++)
        {
            scanf("%f", &arr[i][j]);

            //calculating sum
            sum = sum + arr[i][j];
        }

        //storing average in extra memory
        arr[i][j] = sum / col[i];
    }

    //printing before sorting
    printf("Before sorting output is:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col[i]; j++)
        {
            printf("%f ", arr[i][j]);
        }

        //printing average
        printf("%f\n", arr[i][col[i]]);
    }

    //sorting rows based on average
    for(i = 0; i < row - 1; i++)
    {
        for(j = i + 1; j < row; j++)
        {
            if(arr[i][col[i]] > arr[j][col[j]])
            {
                //swapping row pointers
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                //swapping column sizes
                temp_col = col[i];
                col[i] = col[j];
                col[j] = temp_col;
            }
        }
    }

    //printing after sorting
    printf("After sorting output is:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col[i]; j++)
        {
            printf("%f ", arr[i][j]);
        }

        //printing average
        printf("%f\n", arr[i][col[i]]);
    }

    //freeing allocated memory
    for(i = 0; i < row; i++)
    {
        free(arr[i]);
    }
}
