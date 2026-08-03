#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    char str1[10];
    char str2[10];
    //char *str1;

   scanf("%9s ", str);
   fgets(str1,10,stdin);

    printf("scanf :%s\n", str);
    printf("fgets :%s\n", str1);
    //printf("Pointer string : %s\n", str1);

    return 0;
}