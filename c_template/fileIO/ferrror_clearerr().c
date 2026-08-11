#include<stdio.h>

/*
This program is for using ferror and clearerr() --> validation puropose
*/
int main()
{
    FILE *fptr;

    fptr = fopen("text.txt", "r");

    fputc('A', fptr); //trying to write in file

    //validation
    if(ferror(fptr))
    {
        printf("Error!\n");
        perror("Reason :  "); //prror() --> shows the actual error in the file 
    }
    
    clearerr(fptr); //it sets the ferror flag to zero

    fclose(fptr);

    return 0;
}