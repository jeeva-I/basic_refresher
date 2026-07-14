/******************************************************************************
 * Name: Jeeva
 * Date: 05/07/2026
 * Description: Compare two array elements 
 * ****************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 int main()
 {
     //Declaration
     int size1, size2;
     
     //getting size from user
     //printf("Enter array sizes: ");
     scanf("%d%d", &size1, &size2);
     
     int arr1[size1], arr2[size2], flag = 1;
     
     //printf("Enter the array1 elements: ");
     //getting array1 elements using loop 
     for(int i = 0;i < size1; i++)
     {
         scanf("%d", &arr1[i]); //stores array1 element
     }
     
     //printf("Enter the array2 elements: ");
     //getting array2 elements using loop 
     for(int i = 0;i < size2; i++)
     {
         scanf("%d", &arr2[i]); //stores array2 element
     }
     
     
     
     if(size1 != size2)
     {
         flag = 0;
     }
     else
     {
     //sorting(Bubble) method for both arrays
     for(int i = 0; i < size1- 1; i++)
     {
         for(int j = 0; j < size1 -1 - i; j++) //for sorting array1
         {
             if(arr1[j] > arr1[j + 1])
             {
                 int temp = arr1[j];
                 arr1[j] = arr1[j + 1];
                 arr1[j + 1] = temp;
             }
         }
         
         for(int k = 0; k < size2 -1 - i; k++) //sorting for array2
         {
             if(arr2[k] > arr2[k + 1])
             {
                 int temp = arr2[k];
                 arr2[k] = arr2[k + 1];
                 arr2[k + 1] = temp;
             }
         }
     }  
     }
     
     
     if( size1 == size2)
     {
    //comparing both arrays
    for(int i = 0; i < size1; i++)
    {
        if(arr1[i] != arr2[i])
        {
            flag = 0; //1 --> array elements are equal
            break;
        }
    }
    }
    
    if(flag) //this for checking the flag and prints outputs
    {
        printf("Array elements are equal.");
    }
    else
    {
        printf("Array elements are not equal.");
    }
  
   return 0;   
     
 }