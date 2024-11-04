//WAP to read two integers and print their HCF (Highest Common Factor).
#include<stdio.h>
int main()
{
    int a,b,i,j,hcf;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        for(i=b;i>0;i--)
        {
            if(a%i==0&&b%i==0)
            {
                hcf=i;
                printf("%d is the Highest common factor\n",hcf);
                break;
            }
        }
    }
    else
    {
      for(i=a;i>0;i--)
        {
            if(a%i==0&&b%i==0)
            {
                hcf=i;
                printf("%d is the Highest common factor\n",hcf);
                break;
            }
        }  
    }
    return 0;
}