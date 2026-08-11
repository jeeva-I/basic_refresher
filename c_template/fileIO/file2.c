#include<stdio.h>

int main()
{
    FILE *fptr;
    char ch; 

    fptr = fopen("text.txt", "r");

    //validation
    if(fptr == NULL)
    {
        printf("File doesn't exists\n");
        return -1;
    }   
    printf("File opened succesfully\n");
    while((ch = fgetc(fptr)) != EOF) //fgetc getting the character one after other
    {
        putchar(ch); //printing the character one by one until end of file (EOF)
    }
    
    fclose(fptr);

    return 0;
}