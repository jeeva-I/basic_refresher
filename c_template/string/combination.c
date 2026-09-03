/******************************************************************************
 * Name:jeeva
 * Date: 25/08/2026
 * Description: print all the possible combination of given string
 * ***************************************************************************/
//Header Inclusion
#include<stdio.h> 

//Function prototype
void combination(char [],int ,int );
int my_strlen(char []);

//Main program starts here()
int main()

{
    //Declaration
    char str[100];
    int n;
    int res;
    
    //getting the string from the user
    printf("Enter a string: ");
    scanf("%100[^\n]",str); 
    
    //Comparision
    for(int i = 0;str[i] != '\0';i++)
    {
        for(int j = i + 1;str[j] != '\0';j++)
        {
            if(str[i] == str[j])
            {
                printf("please enter distinct characters.\n"); //printing the error message
                return 0;
            }
        }
    }
    //Function call
    n = my_strlen(str);
    printf("All possible combination of given string :%s\n", str);
    combination(str,0,n-1);  
    return 0;
}

//Function prototype
int my_strlen(char str[])
{   
    //Declration
    int count = 0;
    //using loop to find the lenght of string
    for(int i = 0;str[i] != '\0';i++)
    {
        count++;
    }
    
    return count;
}

void combination(char str[],int start,int end)
{
    //base condition
    if(start == end)
    {
        printf("%s\n", str);
        return;
    }
    //using loop for recursion
    for(int i = start;i <= end;i++)
    {
        //swapping
        char temp = str[start];
        str[start] = str[i];
        str[i] = temp;
        
        //recursive call
        combination(str,start + 1,end);
        
        //Backtracking
        temp = str[start];
        str[start] = str[i];
        str[i] = temp;
    }
    
    
}