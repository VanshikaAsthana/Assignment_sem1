// WAP to check whether number is Perfect Number or not.
#include<stdio.h>
int main()
{
    int a,n,sum;
    printf("Enter the number\n");
    scanf("%d",&a);
    for (n=1;n<a;n++)
    {
        if(a%n==0)
        {
            sum+=n;
        }
    }
    if(sum==a)
    {
        printf("%d is the Perfect number\n",a);
    }
    else
    {
        printf("%d is not the Perfect number\n",a);
    }
    return 0;
}