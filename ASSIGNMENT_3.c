//Simple Calculator
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,ch;
    printf("Enter your choice between 1 to 6:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Logarithmic values\n6. Square roots\n");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    {   
        printf("The choice is Addition\nEnter the values to be worked upon\n");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("The sum is:%d",c);
    }
    break;
    case 2:
    {   
        printf("The choice is Subtraction\nEnter the values to be worked upon\n");
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            c=a-b;
            printf("The difference is:%d",c);
        }
        else
        {
            c=b-a;
            printf("The difference is:%d",c);
        }
    }
    break;
    case 3:
    {   
        printf("The choice is Multiplication\nEnter the values to be worked upon\n");
        scanf("%d %d",&a,&b);
        c=a*b;
        printf("The product is:%d",c);
    }
    break;
    case 4:
    {   
        printf("The choice is Division\nEnter the values to be worked upon\n");
        scanf("%d %d",&a,&b);
        if(b==0)
        {
            printf("Cant perform the operation");
        }
        else
        {
            printf("The quotient is:%f",(float)a/b);
        }
    }
    break;
    case 5:
    {   
    printf("The choice is Logarithmic value (base 10)\nEnter the value to be worked upon\n");
    scanf("%d", &a);
    if (a > 0) 
    {
        printf("log10(%d) = %f\n", a, log10(a));
    } 
    else 
    {
        printf("Logarithm of non-positive value is not defined.\n");
    }
    }
    break;

    break;
    case 6:
    {   
        printf("The choice is Square root\nEnter the values to be worked upon\n");
        scanf("%d",&a);
        if(a>=0)
        printf("The square root is is:%f",(float)pow(a,0.5));
        else
        printf("The square root of negative value not possible");
    }
    break;
    default:printf("Enter the correct value");
    break;
}
    return 0;
}