/*******************************************************************************
 * Name: Jeeva
 * Date: 18/07/2026
 * Description: finding the medain of two arrays 
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 
 //Function prototype
 void sort1(int arr[], int n);
 void sort2(int arr[], int m);
 float medain(int arr[], int n);
 float median(int arr[], int m);

 //Main program 
 int main()
 {
    //Declaration
    int n, m;

    printf("Enter the size of array1:");
    scanf("%d", &n); //Getting the size of array
    printf("Enter the size of array2:");
    scanf("%d", &m); //Getting the size of array

    int arr1[n], arr2[m]; //declaring array

    printf("Enter the arrray1 elements:"); 
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &arr1[i]); //Getting array1 element
    }

    printf("Enter the arrray2 elements:");
    for(int i = 0;i < n;i++)
    {
        scanf("%d", &arr2[i]); //getting array2 element
    }


    //function call
    sort1(arr1, n);
    sort2(arr2, m);
   float med1 = medain(arr1, n);
   float med2 = medain(arr2, m);

    printf("med1 :%g\nmed2 : %g\n",med1, med2); //printing medain of each arrays
    printf("Median of both array : %g", (med1 + med2) / 2); //priting medain of both arrays 
    
    printf("\n"); //printing new line
    return 0;


 }

 //Function definition 
void sort1(int arr[], int n)
{
    int i, j, temp; //declaration
    for(i = 0; i < n -1;i++) //outer loop
    {
        for(j = 0;j < n - i -1;j++) //inner loop for sorting 
        {
            if(arr[j] > arr[j + 1]) //validation
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort2(int arr[], int m)
{
    int i, j, temp; //Declaration
    for(i = 0; i < m - 1;i++) //outer loop 
    {
        for(j = 0;j < m - i -1;j++) //Inner loop for checking 
        {
            if(arr[j] > arr[j + 1]) //validation
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float medain(int arr[], int n)
{
    if(n % 2 == 0) //checking even size array or not 
    {
        return (arr[n/2] + arr[(n/2) - 1]) / 2.0;
    }
    else
    {
       return arr[n / 2];
    } 
}

float median(int arr[], int m)
{
     if(m % 2 == 0) //checking even size or not
    {
        return (arr[m/2] + arr[(m/2) - 1]) / 2.0;
    }
    else
    {
        return arr[m / 2];
    }
}