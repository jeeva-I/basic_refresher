#include<stdio.h>
#include<unistd.h>

int main()
{
    setbuf(stdout,NULL); //This method is not recommented
    while(1)
    {
        printf("Hello World"); //Using \n to avoid the bufffering 
        sleep(1); //it displays the output when the buffer memory gets full
    }

    return 0;
}