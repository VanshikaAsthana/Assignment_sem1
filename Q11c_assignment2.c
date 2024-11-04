// WAP to implement Insert -Specified position
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
    printf("Enter the position where the value is to be inserted\n");
    scanf("%d",&p);
    for(i=len;i>p;i--)
    {
        a[i]=a[i-1];
    }
    printf("Enter the value to be inserted \n");
    scanf("%d",&c);
    a[p]=c;
    len++;
    printf("Updated Array\n");
    for(j=0;j<len;j++)
    {
        printf("%d   ",a[j]);
    }
    return 0;
}