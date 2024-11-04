// WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator)
#include <stdio.h>
int main()
 {
    int a, b;
    printf("Enter the values: ");
    scanf("%d %d", &a, &b);
    while (b != 0) 
    {
        int c = (~a) & b;
        a = a ^ b; 
        b = c << 1; 
    }
    printf("The difference is: %d\n", a);

    return 0;
}
