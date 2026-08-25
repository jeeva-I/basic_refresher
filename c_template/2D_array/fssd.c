#include <stdio.h>
#include<stdlib.h>

void read(int row,int col, char *str[])
{
    for(int i = 0;i < row;i++)
    {
        for(int j = 0;j < col;i++)
        {
            //logic
        }
    }
    
    
}

int main()
{
    int row = 3, col = 3;
    
    int *ptr[3];
    for(int i = 0;i < row;i++)
    {
        ptr[i] =malloc(col*sizeof(int));
    }
    
   read(row,col,ptr);
   
  ptr[0] = realloc(ptr[0],5 * sizeof(int));
  free(ptr[0]);
  free(ptr[1]);
    return 0;
}