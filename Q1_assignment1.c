//WAP to check whether a given is Armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int n,dig=0,copy1,copy2,rem,res=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    copy1=n;
    copy2=n;
    while(copy1>0)
    {
        dig++;
        copy1=copy1/10;
    }
    while(n>0)
    {
        rem=n%10;
        int temp = 1;
        for (int i = 0; i < dig; i++) {
            temp *= rem;
        }
        res+=temp;

        n=n/10;
    }
    if (res==copy2)
    {
        printf("%d is an Armstrong number",copy2);
    }
    else
    {
        printf("%d is not an Armstrong number",copy2);
    }
    return 0;
}
