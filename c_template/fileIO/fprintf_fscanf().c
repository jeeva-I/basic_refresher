#include<stdio.h>

int main()
{
    int num1, num2;
    float num3;
    char str[10], oper, ch;
    FILE *fptr;
    if((fptr = fopen("text.txt","r")) == NULL)
    {
        fprintf(stderr,"Can't open the input file text.txt!..\n");
        return 1;
    }

    fprintf(fptr, "%d %c %d %s %f\n", 2, '#', 8, "Ra1", 46.0);
    printf("position : %ld\n", ftell(fptr));

    //bring the file pointer to the begnning
    rewind(fptr);

    fseek(fptr, 0, SEEK_SET);
    printf("postion : %ld\n", ftell(fptr));
    fscanf(fptr, "%d %c %d %s %f", &num1, &oper, &num2, str, &num3);
    printf("%d %c %d %s %f\n", num1, oper, num2, str, num3);

    fclose(fptr);

    return 0;
}