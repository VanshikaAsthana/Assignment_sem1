//WAP to find Who & how many students have scored 99 in an array Marks. 
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std,test=0,s=0;
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
            printf("Student %d scored 99\n",j+1);
            test=1;
            s+=1;
        }
    }
    if(test==0)
    {
        printf("No one scored 99\n");
    }
    else
    {
        printf("Therefore %d student(s) scored 99\n",s);
    }
    return 0;
}