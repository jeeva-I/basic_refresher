/******************************************************************************
 * Name: Jeeva
 * Date: 02/07/2026
 * Description: copy odd and even elements into two separate arrays 
 * ***************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 int main()
 {
     //Declaration 
     int size, even_size = 0, odd_size = 0; //for getting size 
     
     
     scanf("%d", &size);
     
     int arr[size], even_arr[even_size], odd_arr[odd_size]; //for storing elements
     
     for(int i = 0; i < size; i++) 
     {
         scanf("%d", &arr[i]);
     }
     
     //Using loop and If-else for storing even and odd elements
     for(int i = 0; i < size; i++)
     {   
        
         if(arr[i] % 2 == 0)    //this loop for checking even elements in array
         {   
             
             even_arr[even_size] = arr[i];
             even_size++;
         }
         else
         {
             odd_arr[odd_size] = arr[i];    //this loop for checking odd elements in array
             odd_size++;
         }
         }
          //printing the odd and even arrrays separately 
          printf("Odd array elements: ");
          for(int k = 0; k < odd_size ; k++)    //this loop print even array
          {
              printf("%d", odd_arr[k]);
          }
          printf("\n");
          printf("Even array elemetns: ");
          for(int l = 0; l < even_size; l++)    //this loop print odd array
          {
              printf("%d ", even_arr[l]);
          }
     
        return 0;
     }