// Given an array of n integers. The task is to print the duplicates in the given array. If there are no duplicates then print -1. 
#include <stdio.h>
int main()
{
    int a[50],i,j,len,test=0;
    printf("Enter the number of values\n");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {   
        printf("Enter value %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Array\n");
    for(j=0;j<len;j++)
    {
        printf("%d   ",a[j]);
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d is a duplicate\n",a[i]);
                test=1;
            }
        }
    }
    if(test==0)
    {
        printf("%d",-1);
    }
    return 0;
}