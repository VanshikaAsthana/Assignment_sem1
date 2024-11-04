// WAP to accept two integer numbers and swap them using 4 different methods in C language.
#include<stdio.h>
int main()
{   
    
    //Method 1
    int a,b,c;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping:\n a=%d b=%d",a,b);
   
    //Method 2
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping:\n a=%d b=%d",a,b);

    //Method 3
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n a=%d b=%d\n",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping:\n a=%d b=%d",a,b);


    //Method 4
    int a,b;
    printf("Enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\n a=%d b=%d\n",a,b);
    int *x = &a; 
    int *y = &b; 
    int c = *x; 
    *x = *y;   
    *y = c; 
    printf("After swapping:\n a=%d b=%d\n", a, b);
    return 0;
}