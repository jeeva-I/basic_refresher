#include<stdio.h>

//Function definition
void sum_avg(int num1, int num2)
{
    int sum;
    float avg;
    sum = num1 + num2;
    avg = sum / 2;
    printf("Sum is %d\nAverage is %f\n", sum, avg);
}
int main()
{

    int num1 = 10, num2 = 20;
    //function call
    sum_avg(num1, num2);

    num1 = 30, num2 = 40;
    //function call 
    sum_avg(num1, num2);

    return 0;

}