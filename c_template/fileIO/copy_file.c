/******************************************************************************
 * Name: Jeeva
 * Date: 10/08/2026
 * Description: Copy the content of one file to another file
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Main program starts here()
 int main()
 {
     //declaring file pointer
     FILE *fptr1, *fptr2;
     char ch; //For the read and write the file
     
    //open and set the mode of the file
    fptr1 = fopen("text.txt","r"); //Reads the file
    fptr2 = fopen("text_copy.txt","a"); //appeand the character
    
    //validation for file open
    if(fptr1 == NULL)
    {
        printf("File doesn't exists\n");
        return -1;
    }
    
    printf("File opened sucessfully\n");

    while((ch = fgetc(fptr1)) != EOF) //for reading the charachter from the file 
    {
        fputc(ch,fptr2); //copy the character to another file
    }

    fclose(fptr1);
    fclose(fptr2);
    
    return 0;
    
 }