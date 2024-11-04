//Given an array, the task is to cyclically rotate the array clockwise by one time.
#include<stdio.h>
int main()
{
    int a[50],i,j,len,p,c;
    printf("Enter the number of values\n");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {   
        printf("Enter value %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Original Array\n");
    for(j=0;j<len;j++)
    {
        printf("%d   ",a[j]);
    }
    printf("\n");
    c=a[len-1];
    for(i=len-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=c;
    printf("Updated Array\n");
    for(j=0;j<len;j++)
    {
        printf("%d   ",a[j]);
    }
    return 0;
}