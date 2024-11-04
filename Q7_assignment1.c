// WAP for Binary to Decimal conversion & Decimal to Binary for a given number  as per user’s choice.
#include <stdio.h>
int main() {
    int ch, number;
    printf("Choose conversion type:\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &ch);
    if (ch== 1)
     {
        printf("Enter a decimal number: ");
        scanf("%d", &number);
        int binary[50]; 
        int index = 0;
        while (number > 0)
        {
            binary[index] = number % 2;
            number/= 2;
            index++;
        }
        printf("Binary: ");
        for (int i = index - 1; i >= 0; i--) 
        {
            printf("%d", binary[i]);
        }
        printf("\n");
    } 
    else if (ch== 2) 
    {
        printf("Enter a binary number: ");
        scanf("%d", &number);
        int decimal = 0, base = 1, lastDigit;
        while (number > 0) 
        {
            lastDigit = number % 10;
            number /= 10;
            decimal += lastDigit * base;
            base *= 2;
        }

        printf("Decimal: %d\n", decimal);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
