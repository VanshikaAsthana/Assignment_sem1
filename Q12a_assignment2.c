//WAP to implement delete-Front position
#include<stdio.h>
int main()
{
    int a[50],i,j,len,c;
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
    for(i=0;i<len-1;i++)
    {
        a[i]=a[i+1];
    }
    a[len]=-1;
    len--;
    printf("Updated Array\n");
    for(j=0;j<len;j++)
    {
        printf("%d   ",a[j]);
    }
    return 0;
}