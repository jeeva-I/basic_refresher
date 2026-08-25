/*******************************************************************************
 * Name: Jeeva
 * Date: 25/06/2026
 * Description: Square3 numbers using array of pointers
 * ****************************************************************************/
 
 //Header Inclusion 
 #include<stdio.h>
 
 //Function prototype
 void square(int **arr,int n);
 
 //Main program starts here()
 int main()
 {
    //Declaration
    int n1 , n2 , n3;
    
    printf("Enter n1,n2,n3 : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    int *ptr[3] ={&n1, &n2, &n3}; //Array pointer
    
    //Function call
    square(ptr,3);
    
    printf("Square elements are: \n");
    //using loop 
    for(int i = 0; i <3;i++)
    {
        printf("%d ", *ptr[i]);
    }
    printf("\n"); //New line
    return 0;
 }
 
 //Function definition
 void square(int **arr,int n)
 {
    //using loop 
    for(int i = 0;i < n;i++)
    {
        *arr[i] = (*arr[i]) * (*arr[i]);
    }
 }