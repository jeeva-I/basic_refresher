/*******************************************************************************
 * Name:Jeeva
 * Date: 05/08/2026
 * Description: Read the strring and find the length of the string by creating own function
 * ****************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 
 //Function prototype 
 int my_len(char*);
 
 //Main program starts here()
 int main()
 {
     //Declaration
     char str[50];
     
     //Getting string from the user
     //printf("Enter the string : ");
     scanf("%49s", str);
     
     //Function call
     int res = my_len(str);
    
    //printing the output
    printf("String length is %d\n", res);
    
     return 0;
 }
 
 //Function definition
 int my_len(char *str)
 {
     //Declaration 
     int count  = 0;
    
     while(*str != '\0')
     {
        count++;
        str++;
     }
     
     
     return count;
 }