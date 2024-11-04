//WAP to increase every student mark by 5 & then print the updated array.
#include<stdio.h>
int main()
{
    int a[50],i,j,num_std;
    printf("Enter the number of the students\n");
    scanf("%d",&num_std);
    for(i=0;i<num_std;i++)
    {   
        printf("Enter marks of student %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Original Array\n");
    for(j=0;j<num_std;j++)
    {
        printf("%d   ",a[j]);
    }
    printf("\n");
    printf("Updated Array\n");
    for(j=0;j<num_std;j++)
    {
        printf("%d   ",a[j]+5);
    }
    return 0;
    

}