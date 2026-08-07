#include<stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("text.txt", "w");

    if(fptr == NULL)
    {
        printf("File doesn't exists\n");
        return 0;
    }
    else
    {
        printf("File Opened Successfully\n");
    }
    fclose(fptr);
    return 0 ;

    return 0;
}