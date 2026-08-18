/******************************************************************************
 * Name: Jeeva
 * Date: 18/08/2026
 * Description: Read and print the string using DMA
 * ****************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 #include<stdlib.h>
 
 //Main program starts here()
 int main()
 {
    //Declaration
    char *ptr = malloc(15);
    
    //Validation
    if(ptr == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }
    printf("Memory is allocated\n");
    
    //getiing input from the user
    printf("Enter the string:");
    fgets(ptr,15,stdin);
    
    printf("%s\n", ptr);
    
    return 0;        
 }