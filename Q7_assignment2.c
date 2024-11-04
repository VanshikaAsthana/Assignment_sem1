// WAP to check whether score is even or odd in an array.
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
        if(a[j]%2==0)
        {
            printf("Student %d:Even marks\n",j+1);
        }
        else
        {
            printf("Student %d:Odd marks\n",j+1);
        }    
    }
    return 0;
}