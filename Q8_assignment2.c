//WAP to find maximum & minimum score in the Marks array. 
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std,max,min;
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
    max=a[0];
    for(j=0;j<num_std;j++)
    {
        if(max<a[j])
        {
            max=a[j];
        }
    }
    min=a[0];
    for(j=0;j<num_std;j++)
    {
        if(min>a[j])
        {
            min=a[j];
        }
    }
    printf("Maximum marks:%d\n",max);
    printf("Minimum marks:%d\n",min);

    return 0;
}