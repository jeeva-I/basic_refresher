#include <stdio.h>
#include<stdlib.h>

void read(int row,int col, char (*str)[col])
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
    
    int *(ptr)[col];
   
    
    ptr=calloc(row,sizeof(*ptr));
    
    read(row,col,ptr);
   
    free(ptr);
    return 0;
}