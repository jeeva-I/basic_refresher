/*******************************************************************************
 * Name: JEEVA
 * Date: 10/09/2026
 * Description: Find min and max of 2D array
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //FUnction prototype
 void min_max(int row,int col,int arr[row][col]);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    int row, col;
    
    printf("Enter the row and col : ");
    scanf("%d%d", &row, &col);
    
    int arr[row][col];
    
    printf("Enter the array elements: ");
    //getting array elements from the user
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    //Function call
    min_max(row,col,arr);
    
    return 0;
 }
 
 //Function prototype
 void min_max(int row,int col,int arr[row][col])
 {
    
    /*Declaration*/
    int min = arr[0][0];
    int max = arr[0][0];
    
    //using loop to find min and max
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;j++)
        {
            if(arr[i][j] < min) //compare to find min element in an array
            {
                min = arr[i][j];
            }
            if(arr[i][j] > max) //compare to find max element in an array
            {
                max = arr[i][j];
            }
        }
    }
    
    /* Displaying the output */
    printf("Min is %d\n", min);
    printf("Max is %d\n", max);
 }
