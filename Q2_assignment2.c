//WAP to print grade of students as per their marks given in an array. (>=75-- A grade, 74 to 60--B Grade, 59 to 40--C grade below 40--D grade).
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std;
    printf("Enter the number of the students\n");
    scanf("%d",&num_std);
    for(i=0;i<num_std;i++)
    {   
        printf("Enter marks of student %d out of 100:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Array of student marks\n");
    for(j=0;j<num_std;j++)
    {
        printf("%d   ",a[j]);
    }
    for(j=0;j<num_std;j++)
    {
        if(a[j]>=75&&a[j]<=100)
        {
            printf("Student %d:Grade A\n",j+1);
        }
        else if(a[j]>=60&&a[j]<=74)
        {
            printf("Student %d:Grade B\n",j+1);
        }
        else if(a[j]>=40&&a[j]<=59)
        {
            printf("Student %d:Grade C\n",j+1);
        }
        else if(a[j]<40)
        {
            printf("Student %d:Grade D\n",j+1);
        }
        else
        {
            printf("Student %d:Wrong value entered\n",j+1);
        }    
    }
    return 0;
}