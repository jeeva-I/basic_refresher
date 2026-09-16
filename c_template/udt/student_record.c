/*******************************************************************************
 * Name: JEEVA
 * Date: 16/09/2026
 * Description: Creating students record
 * ****************************************************************************/
 
 //Header Inclusion
 #include<stdio.h>
 #include<stdlib.h>
 
 //Creating structure
 typedef struct students
 {
    char name[20]; //for storing students name
    int p; //physics mark
    int c; //Chemistry mark
    int m; //maths mark
 }Student;
 
 //Main program starts here()
 int main()
 {
    //decalration
    int n;
    float p_avg = 0, c_avg = 0, m_avg = 0;
    
    //Getting input from the user
    printf("Enter the number of students : ");
    scanf("%d", &n);
    
    //Structure pointer
    Student *students;
    
    //Allocating dynamic memeory
    students = malloc(n * sizeof(Student));
    
    //validation for DMA
    if(students == NULL)
    {
        printf("Failed to allocate memory\n");
        return 1; 
    }
    
    //getting students details from the user
    for(int i = 0; i < n; i++)
    {
        //Getting the student name
        printf("Enter name of the student : ");
        scanf("%19s", students[i].name);
        
        //Getting student marks
        printf("Enter P, C and M marks : ");
        scanf("%d%d%d", &students[i].p, &students[i].c, &students[i].m);
        
    }
    
    
    printf("--------------------------------------------------------------------\n");
    printf("Name Maths Physics Chemistry\n");
    printf("--------------------------------------------------------------------\n");
    
    //Using loop to print the details
    for(int i = 0; i < n; i ++)
    {
        printf("%s %d %d %d\n", students[i].name, students[i].m, students[i].p, students[i].c);
        
        //calculating avg for maths, physics and cheistry
        m_avg = m_avg + students[i].m;
        p_avg = p_avg + students[i].p;
        c_avg = c_avg + students[i].c;
        
    }
    
    printf("--------------------------------------------------------------------\n");
    
    
    //Displays the average to the user
    printf("Average %5.2f %5.2f %5.2f\n", (m_avg / n), (p_avg / n), (c_avg / n));
    
    printf("--------------------------------------------------------------------\n");
    
    return 0;
 }