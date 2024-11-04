// WAP to find a peak element which is not smaller than its neighbors.
#include<stdio.h>
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
    printf("Array:\n");
    for(j=0;j<len;j++)
    {
        printf("%d   ",a[j]);
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        if(a[i]>a[i+1]&&a[i]>a[i-1])
        {
            printf("%d is a peak element\n",a[i]);
            test=1;
        }
    }
    if(test==0)
    {
        printf("No peak element\n");
    }
    return 0;
}