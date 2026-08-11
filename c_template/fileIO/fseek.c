#include<stdio.h>

/*
This program is for fseek() -> function
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


   fseek(fptr,10,SEEK_SET);
   ch = fgetc(fptr);
   putchar(ch);
   fseek(fptr,-10,SEEK_END);
   ch = fgetc(fptr);
   putchar(ch);
   fseek(fptr,10,SEEK_CUR);
   ch = fgetc(fptr);
   putchar(ch);
   fseek(fptr,-10,SEEK_CUR);
   ch = fgetc(fptr);
   putchar(ch);


    fclose(fptr);

    return 0;
}