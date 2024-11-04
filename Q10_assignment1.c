//WAP to print Pascal’s Triangle.
#include<stdio.h>
int main()
{
    int i,j,space,value,n;
    printf("enter no of rows(n):  ");
    scanf("%d", &n);

    value=1;
    for(i=0;i<n;i++)
    {
        for(space=1;space<=(n-i-1);space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%2d",value);
            value=value*(i-j)/(j+1);
        }
        printf("\n");
        value = 1;
    }
    return 0;
}
