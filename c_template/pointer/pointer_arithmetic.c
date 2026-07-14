/* incrementing array value using pointer and pritning it 
*/

//Header Inclusion
#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = a;

    printf("*ptr = %d\n", *ptr);
    ptr = ptr + 1;
    printf("*ptr = %d\n", *ptr);
    printf("*(ptr + 3) = %d\n", *(ptr + 3));
     printf("*ptr = %d\n", *ptr);

     return 0;

}