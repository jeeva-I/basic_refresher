#include<stdio.h>

//program starts here
int main()
{
    //declaring pointer
    int *iptr;
    float *fptr;
    char *cptr;
    double *dptr;

    //printing the size
    printf("%zu byte\n", sizeof(iptr));
    printf("%zu byte\n", sizeof(fptr));
    printf("%zu byte\n", sizeof(cptr));
    printf("%zu byte\n", sizeof(dptr));

    return 0;
}