/* WAP to print below mentioned pattern: 
1  
01  
101  
0101  
10101*/
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("%d",1);
            }
            else
            {
                printf("%d",0);
            }
        }
        printf("\n");
    }
    return 0;
}