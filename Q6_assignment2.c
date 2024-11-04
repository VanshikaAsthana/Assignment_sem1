// WAP to find average score of the Marks array
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std,s=0;
    float avg;
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
        avg=s/num_std;

    }
    printf("%f is the average of all marks in the array\n",avg);
    return 0;
}