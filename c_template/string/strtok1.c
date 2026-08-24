    /*******************************************************************************
     * Name: JEEVA
     * Date: 23/08/2026
     * Description: printing the string using delimeter
     * ****************************************************************************/
    
    //Header Inclusion
    #include <stdio.h>
    #include <string.h>
    #include <stdio_ext.h>
    
    //Function prototype
    char *my_strtok(char str[], const char delim[]);
    
    //Main program starts here()
    int main()
    {
        //Declaration
        char str[50], delim[50];
        
        //getting the input from the user
        printf("Enter the string  : ");
        scanf("%49s", str);
        
        __fpurge(stdout);
     
        printf("Enter the delimeter : ");
        scanf("%49s", delim);
        __fpurge(stdout);
        
        //Function call 
        char *token = my_strtok(str, delim);
        printf("Tokens :\n");
        
        while (token) //using loop for printing the string upto null 
        {
            printf("%s\n", token);
            token = my_strtok(NULL, delim);
        }
        
        return 0;
    }
    
    //Function defintion 
    char *my_strtok(char str[], const char delim[])
    {
        //Declartion 
         char *start = 0;
         static char *ptr;
         
         if(str != NULL) //comparing to copy the string to another pointer
         {
            ptr = str;
         }
         
         while(*ptr != '\0') //using loop to check the consecutve delimeter
        {   
            int found = 0;
            for(int j = 0;delim[j] != '\0';j++)
            {
            if(*ptr == delim[j])
            {   
                found = 1;
                ptr++;
                break;;
            }
            }
        
            if(found == 0)
            {
                break;
            }
        }
        
        if(*ptr == '\0') //comparision to retrn null
        {
            return NULL;
        }
        
        start = ptr; //setting the starting of string after delimeter
        
        //Using loop for printing the output 
        while(*ptr != '\0')
        {   
            for(int j = 0;delim[j] != '\0';j++)
            {
            if(*ptr == delim[j])
            {   
                *ptr = '\0';
                 ptr++;
                return start; //returning the starting of pointer after delimeter
            }
            }
             ptr++; //Incrementation
        }
        
        return start; //returning the starting of pointer after delimeter
    
    }
    
