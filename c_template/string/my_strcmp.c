/*******************************************************************************
 * Name: Jeeva
 * Date: 22/07/2026
 * Description: Creating own strcmp() function
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 int my_strcmp(char*, char*);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     char str1[50], str2[50];
     
     //Getting strings from the user to compare
     printf("Enter the string1: ");
     fgets(str1, 50, stdin);
     printf("Enter the string2: ");
     fgets(str2, 50, stdin);
     
     //Function call
     int res = my_strcmp(str1, str2);
     
     //checkin and priting the output
     res == 0 ? printf("Entered Strings are equal\n") : printf("Entered Strings are not equal\n");
     
     return 0;
 }
 
 //Function Definition
  int my_strcmp(char *str1, char *str2)
  {
      //Using while loop to check again and again
      while(*str1 != '\0' && *str2 != '\0')
      {
          //Using if_else to compare
          if(*str1 == *str2)
          {
              //Incrementing the address
              str1++; 
              str2++;
          }
          else
          {
              break; //stop the loop
          }
        
      }
      
      return *str1 - *str2; //Returning to main function
  }