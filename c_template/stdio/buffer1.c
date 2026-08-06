#include<stdio.h>
#include<unistd.h>

int main()
{
    
    while(1)
    {
        printf("Hello World\n"); //Using \n to avoid the bufffering 
        sleep(1); //it displays the output when the buffer memory gets full
    }

    return 0;
}