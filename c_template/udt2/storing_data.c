/*******************************************************************************
 * Name: JEEVA
 * Date: 10/09/2026
 * Description: Creating menu for store data
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 
 //Defining macro
 #define MEMORY_SIZE 8
 #define MAX_ELEMENTS 8
 
 //Creating structure
 typedef struct
 {
    char type;
    int size;
    int offset;
 }Element;
 
 /* Function prototype */
 void add_element(void *memory, Element elements[], int *count, int *used);
 void rm_element(void *memory, Element elements[], int *count, int *used);
 void display_element(void *memory, Element elements[], int count);
 
 //Main program starts here()
 int main()
 {
    //Memory allocation
    void *memory = malloc(MEMORY_SIZE);
    
    //Validation for memory 
    if(memory == NULL)
    {
        printf("Memory alloacation failed\n");
        return 1;
    }
    
    //structure variable declaration
    Element elements[MAX_ELEMENTS];
    
    //Declaration
    int count = 0, used = 0, choice;
    
    //Using while loop 
    while(1)
    {
        printf("\n=====MENU=====\n");
        printf("1. Add element\n");
        printf("2. Remove element\n");
        printf("3. Display element\n");
        printf("4. Exit from the program\n");
        
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1:
                add_element(memory, elements, &count, &used); //Function call()
                break;
            case 2:
                rm_element(memory, elements, &count, &used); //Function call()
                break;
            case 3:
                display_element(memory, elements, count); //Function call()
                break;
            case 4: 
                free(memory); //deleting the memory after use
                return 0;
            default:
                printf("Invalid choice\n");
        
        }
    }
    
    return 0;
 }
 
 /* FUNCTION DEFINITION */

void add_element(void *memory, Element elements[], int *count, int *used)
{
    //declaration 
    int choice, size, type;
    
    /* Displaying the options */
    printf("Enter the type you have to insert: \n");
    printf("1. int\n");
    printf("2. char\n");
    printf("3. float\n");
    printf("4. double\n");
    scanf("%d", &choice);

    //Assigning size and type of insertion
    if(choice == 1)
    {
        size = sizeof(int);
        type ='i';
    }
    else if(choice == 2)
    {
        size = sizeof(char);
        type ='c';
    }
    else if(choice == 3)
    {
        size = sizeof(float);
        type ='f';
    }
    else if(choice == 4)
    {
        size = sizeof(double);
        type ='d';
    }
    else
    {
        printf("Invalid choice\n");
        return;
    }
    
    //checking the space
    if(*used + size > MEMORY_SIZE)
    {
        printf("Not enough memory\n");
        return;
    }
    
    //For pointing the next unused memeory
    char *ptr = (char *)memory + *used;
    
/* storing the data into the address */
    if (type == 'c')
    {
        char value;
        printf("Enter char: ");
        scanf(" %c", &value);
        memcpy(ptr, &value, sizeof(char));
    }
    else if (type == 'i')
    {
        int value;
        printf("Enter int: ");
        scanf("%d", &value);
        memcpy(ptr, &value, sizeof(int));
    }
    else if (type == 'f')
    {
        float value;
        printf("Enter float: ");
        scanf("%f", &value);
        memcpy(ptr, &value, sizeof(float));
    }
    else if (type == 'd')
    {
        double value;
        printf("Enter double: ");
        scanf("%lf", &value);
        memcpy(ptr, &value, sizeof(double));
    }

    //fetching the data into the structure members 
    elements[*count].type = type;
    elements[*count].size = size;
    elements[*count].offset = *used;
    
    //increamenting the size and count 
    *used += size;
    (*count)++;
}
    
 
 void rm_element(void *memory, Element elements[], int *count, int *used)
{
    int index; //declaration 

    //Getting the input from the user
    printf("Enter the index to be deleted: ");
    scanf("%d", &index);
    
    //chekcing the valid or invalid index
    if (index < 0 || index >= *count)
    {
        printf("Invalid index\n");
        return;
    }
    
    //fetching the element from the structure
    int remove_offset = elements[index].offset;
    int remove_size = elements[index].size;

    /*
     * Move the memory after the removed element
     * towards the left.
     */
    int bytes_after = *used - (remove_offset + remove_size);

    memmove(
        (char *)memory + remove_offset,
        (char *)memory + remove_offset + remove_size,
        bytes_after
    );

    /*
     * Shift metadata.
     */
    for (int i = index; i < *count - 1; i++)
    {
        elements[i] = elements[i + 1];
        elements[i].offset -= remove_size;
    }
    
    //Decrementing size and count after deleting 
    (*count)--;
    *used -= remove_size;
    
    //Displaying output
    printf("index %d successfully deleted\n", index);
}

 void display_element(void *memory, Element elements[], int count)
{
    //Checks wheather the element are present are not
    if (count == 0)
    {
        printf("No elements\n");
        return;
    }
        
    /* running looop for display all elements */
    for (int i = 0; i < count; i++)
    {
        char *ptr = (char *)memory + elements[i].offset;

        printf("%d -> ", i);

        if (elements[i].type == 'c')
        {
            printf("%c (char)\n", *(char *)ptr);
        }
        else if (elements[i].type == 'i')
        {
            printf("%d (int)\n", *(int *)ptr);
        }
        else if (elements[i].type == 'f')
        {
            printf("%f (float)\n", *(float *)ptr);
        }
        else if (elements[i].type == 'd')
        {
            printf("%lf (double)\n", *(double *)ptr);
        }
    }
}
 
