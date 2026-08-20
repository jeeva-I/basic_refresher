/*******************************************************************************
 * Name:JEEVA
 * Date: 20/08/2026
 * Description: Create own my_strncmp() function
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype 
 int my_strncmp(char [], char [], int);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    char str1[50];
    char str2[50];
    int n;
    
    //getting the input form the user
    printf("Enter the str1: ");
    scanf("%s", str1);
    printf("Enter the str2: ");
    scanf(" %s", str2);
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    //Function call
    int res = my_strncmp(str1, str2, n);
    
    //Validation
    if(res == -1)
    {
        printf("str1 is less than str2\n");
        return 0;
    }
    else if(res == 1)
    {
        printf("str2 is less than str1\n");
        return 0;;
    }
    
    printf("str1 is equal to str2\n");
    return 0;
 }
 
 //Function definition
 int my_strncmp(char str1[], char str2[],int n)
 {
     for(int i = 0;i < n;i++)
     {
       if(str1[i] != str2[i])
       {
           if(str1[i] > str2[i])
           {
               return 1;
           }
           else
           {
               return -1;
           }
       }
     }
     
     return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 