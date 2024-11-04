//WAP to find who scored first “99” in an array marks.
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std,test=0;
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
    printf("\n");
    for(j=0;j<num_std;j++)
    {
        if(a[j]==99)
        {
            printf("Student %d scored 99 first",j+1);
            test=1;
            break;
        }
    }
    if(test==0)
    {
        printf("No one scored 99\n");
    }
    return 0;
}