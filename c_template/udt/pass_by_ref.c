#include<stdio.h>
#include<string.h>

struct details
 {
     char name[40];
     int id;
     char address[40];
 };

 int main()
 {
    struct details st = {"Jeeva", 46, Utharavai};
    struct details *sptr = &st;

    printf("%s\n", *sptr.id);

    return 0;
 }