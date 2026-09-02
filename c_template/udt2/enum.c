#include<stdio.h>

enum bool
{
    e_true,
    e_flase,
    e_next
};

int main()
{
    printf("%d\n", e_true);
    printf("%d\n", e_flase);
    printf("%d\n", e_next);
    printf("Size of enum : %zu\n", sizeof(enum bool));

    return 0;
}