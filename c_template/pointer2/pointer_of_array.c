/*******************************************************************************
 * Name:JEEVA
 * Date: 12/09/2026
 * Description: Sort N names in alphabetical order using dynamic memory
 * ****************************************************************************/

//Header Inclusion
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function prototype
void sort_names(char (*)[20], int);

//Main program starts here()
int main()
{
    //Declaration
    int n;
    char (*name)[20];

    //getting the size from the user
    printf("Enter the size: ");
    scanf("%d", &n);

    //DMA for number of names
    name = calloc(n, sizeof(*name));

    //validation
    if(name == NULL)
    {
        printf("Memory is not allocated\n");
        return 1;
    }

    //getting names from the user
    printf("Enter the %d names of length max 20 characters in each\n", n);

    for(int i = 0; i < n; i++)
    {
        printf("[%d] -> ", i);
        scanf("%19s", name[i]);
    }

    //Function call
    sort_names(name, n);

    //printing sorted names
    printf("The sorted names are:\n");

    for(int i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    //freeing allocated memory
    free(name);

    return 0;
}

//Function definition
void sort_names(char (*name)[20], int n)
{
    //Declaration
    int i, j;
    char temp[20];

    //sorting names alphabetically
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                //swapping names
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
}