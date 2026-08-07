#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch; 

    fptr = fopen("text.txt", "r");
    if(fptr == NULL)
    {
        printf("File doesn't exists\n");
    }

    else
    {
        
    printf("File opened succesfully\n");
    while((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }
    }
    fclose(fptr);

    return 0;
}