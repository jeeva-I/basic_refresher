/*******************************************************************************
 * Name: JEEVA
 * Date: 25/08/2026
 * Description: Create 2D array using pointer
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function definition
 void display(int rows,int cols,int (*ptr)[cols])
 {
    for(int i = 0;i < rows;i++) //printing the values
    {
        for(int j = 0;j < cols;j++)
        {
          printf("%d ", ptr[i][j]);
        }
        printf("\n"); //new line
    }
 }
 
 //Main program starts here()
 int main()
 {
     //Declaration
    int rows,cols;
    
    //Getting input from the user
    printf("Enter the number of rows and cols: ");
    scanf("%d%d", &rows, &cols);

    int arr[rows][cols];
    
    printf("Enter the elements: ");
    //using loop to get the input
    for(int i = 0;i < rows;i++)
    {
        for(int j = 0;j < cols;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("Elements of the array are : ");
    
    printf("\n"); //New line
    //Function call
    display(rows,cols,arr);
    
    return 0;
 }