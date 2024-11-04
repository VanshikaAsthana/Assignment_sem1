// WAP to find sum of all scores in Marks array. 
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std,s=0;
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
        s+=a[j];
    }
    printf("%d is the sum of all marks in the array\n",s);
    return 0;
}