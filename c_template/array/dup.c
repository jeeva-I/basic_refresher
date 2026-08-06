


#include <stdio.h>

void fun(int arr1[], int size, int arr2[], int *new_size)
{
    int i,j,flag;
    *new_size=1;
    arr2[0]=arr1[0];
    for(i=0;i<size;i++)
    {
        flag=0;
        for(j=0;j<*new_size;j++)
        {
            if(arr1[i]==arr2[j])
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        arr2[(*new_size)++]=arr1[i];
    }
    
}
int main()
{
    int size,new_size;
    scanf("%d",&size);
    int arr1[size],arr2[size];
    for(int i=0;i<size;i++)
    scanf("%d",(arr1+i));
    fun(arr1,size,arr2,&new_size);
    printf("After removing duplicates: ");
    for(int i=0;i<new_size;i++)
    printf("%d ",arr2[i]);
}