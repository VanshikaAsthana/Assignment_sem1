#include <stdio.h>

int main() 
{
    int n,i,j;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
     {
        for (j = 0; j < i; j++) 
        {
            printf("%d", j % 2);
        }

        for (int j = 0; j < (2 * (n - i)); j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++) 
        {
            printf("%d", j % 2);
        }
        printf("\n");
    }

    return 0;
}


