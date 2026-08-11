#include<stdio.h>

/*
This program is for printing the current postion of the file pointer
*/
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
         printf("%c  position is %ld\n", ch, ftell(fptr)); //prints the each character and their rescective position
     }
    
    printf(" Total File position : %ld\n", ftell(fptr));
    fclose(fptr);

    return 0;
}