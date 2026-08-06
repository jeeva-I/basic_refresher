#include<stdio.h>

int main()
{
    char str1[10];
    char str2[10];
    int num;
    char str[100] = "I am 20 year old";

    sscanf("There are 3 boys","%s %s %d", str1, str2, &num);

    printf("%s %s %d\n", str1, str2, num);

    sscanf(str,"%s %s %d", str1, str2, &num);

    printf("%s %s %d\n", str1, str2, num);
    return 0;
}