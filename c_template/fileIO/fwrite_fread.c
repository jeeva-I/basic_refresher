#include<stdio.h>
/* these program for read and write from binary files */
int main()
{
    int num1, num2, num3, num4;

    FILE *fptr = fopen("text.txt", "w+");

    if(fptr == NULL)
    {
        printf("File is not opened\n");
    }
    printf("File opened sucessfully\n");

    printf("enter num1 and num2");
    scanf("%d %d", &num1, &num2);
    fwrite(&num1,sizeof(num1),1,fptr);
    fwrite(&num2,sizeof(num2),1,fptr);
    rewind(fptr);
    fread(&num3,sizeof(num3),1,fptr);
    fread(&num4,sizeof(num4),1,fptr);

    printf("num3: %d\nnum4: %d\n", num3, num4);

    fclose(fptr);

    return 0;

}