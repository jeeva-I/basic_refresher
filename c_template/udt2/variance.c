/*******************************************************************************
 * Name: JEEVA
 * Date: 11/09/2026
 * Description: Calculate the variance
 * ****************************************************************************/
 
//Header Inclusion
#include <stdio.h>
#include<stdlib.h>

//Function prototype
float variance(int *, int);

//Main program starts herr()
int main()
{
    //Declaration
    int size;
    //getting the input from the size
    printf("Enter the size: ");
    scanf("%d", &size);
    
    //creating DMA for storing values
    int *iptr = malloc(size * sizeof(int)); 
    
    //validation
    if(iptr == NULL)
    {
        printf("Failed to allocate the memory"); //printing error message
        return 1;
    }
    
    printf("Enter the %d elements: \n", size);
    //using loop to store the integer values into DM
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &iptr[i]);
    }
    
    //Function call
    float res = variance(iptr, size);
    
    printf("Variance is %f\n", res);
    
    return 0;
}


//Function prototype
float variance(int *iptr, int size)
{
    //declaration
    int sum = 0;
    float D = 0, sum_sq = 0, var = 0;
    
    //using loop to find the sum of all elements
    for(int i = 0;i < size;i++)
    {
        sum = sum + iptr[i]; //adding all elements
    }
    
    //calculating mean
    float mean = (float)sum / size;
    
    //using loop to calculate deviation
    for(int i = 0;i < size;i++)
    {
        D = iptr[i] - mean; //find deviation element
        D = D * D; //Squaring the elements
        sum_sq = sum_sq + D; //ADDs the squaring element 
    }
    
    ///Final calculation of variance
    var = sum_sq / size;
    
    return var;
   
}