#include<stdio.h>

int main()
{
    FILE *fptr; //FIle pointer

    fptr = fopen("text.txt", "w"); //open th file and set the mode

    //validation
    if(fptr == NULL)
    {
        printf("File doesn't exists\n");
        return -1;
    }
    printf("File Opened Successfully\n");
    fclose(fptr); //closing the file 
    return 0 ;

    return 0;
}