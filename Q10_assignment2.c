// WAP to count prime numbers in an array. 
#include<stdio.h>
int main()
{
    int a[50],i,j,len,test=0,c=0;
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
    for(j=0;j<len;j++)
    {   
        test=0;
        if (a[j]<=1) 
        {
            test=1; 
        }
        else
        {
            for(i=2;i<a[j];i++)
            {
            if(a[j]%i==0)
            {
                test=1;
                break;
            }    
            }
        }
        if(test==0)
        {   
            printf("%d is a prime number\n",a[j]);
            c++;
        }
    }
    
    if (c > 0) 
    {
        printf("%d prime numbers are there in the array\n", c);
    } 
    else 
    {
        printf("No prime numbers\n");
    }
    return 0;
}
