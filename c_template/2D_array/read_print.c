/*******************************************************************************
 * Name: JEEVA
 * Date: 21/08/2026
 * Description: Read and print the 2d_array
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
    //Declaration 
    int row_size, col_size;
    
    printf("Enter row and column: ");
    scanf("%d%d", &row_size, &col_size);
    int arr[row_size][col_size];
    
    printf("Enter row and column elements: ");
    //Using nested loop to get the array elements
    for(int i = 0; i < row_size;i++)
    {
        for(int j = 0; j < col_size;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    //using nested loop for printing the array elements
    for(int i = 0; i < row_size;i++)
    {
        for(int j = 0; j < col_size;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); //new line
    }
    
    return 0;
 }