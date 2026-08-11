#include<stdio.h>

/*
This program is for Writing and priting the character and string 
*/
int main()
{
    FILE *fptr; //File pointer
    char ch; //character variable
    char str[10] = "Hello"; //string variable 

    fptr = fopen("text.txt", "w"); //opening the file 

    //validation
    if(fptr == NULL)
    {
        printf("File doesn't exists\n");
        return -1;
    }   
    printf("File opened succesfully\n");
    
    printf("enter the character :");
    scanf("%c", &ch);

    fputc(ch, fptr); /*for wrinting the c*/
    fputs(str, fptr); //for writing string character
    
    fclose(fptr);

    return 0;
}