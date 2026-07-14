/*******************************************************************************
 * Name: Jeeva
 * Date: 27/06/2026
 * Description : Remove duplicates in a array
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration 
     int size;
     
     //get the size from the user
     printf("Enter array size: ");
     scanf("%d",&size);
     
     int arr[size], uniq_size = 0, uniq_arr[size];
     
     //get array elements
     printf("Enter array elements: ");
     for(int i = 0; i < size; i++)
     {
         scanf("%d", &arr[i]);
     }
     
     //using loop to copy array elements
      uniq_arr[0] =  arr[0]; //copy first element of array 
      uniq_size = 1;
     for(int i = 1; i < size; i++) //this loop for checking array limit 
     {
        int found = 0; //indicated no duplicate found
        for(int j = 0; j < uniq_size; j++) //this loop for checking the current and previous element of array
        {
            if(arr[i]  == uniq_arr[j]) //checks the element of array
            {
                found = 1; //indicated duplicate found
                break;
            }
            
        }
        if(found == 0) //for stroing non duplicate value in uniq_array
            {
                uniq_arr[uniq_size] = arr[i];
                uniq_size++;
            }
     }
        
        printf("Unique array elements: ");
        for(int i = 0; i < uniq_size; i++)
        {
            printf("%d ", uniq_arr[i]);
        }
     
     return 0;
       
 
 }
 