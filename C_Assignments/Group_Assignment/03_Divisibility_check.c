#include <stdio.h>

int main(void)
{
    // variable declaration
    int a, b;

    printf("Enter a number: ");
    scanf("%d", a);

    printf("Enter another number: ");
    scanf("%d", b);

    if (a / b == 0)
    {
        printf("Number %d is divisible by Number %d.\n", a, b);
    }
    else
    {
        printf("Number %d is NOT divisible by Number %d.\n", a, b);
    }

    return 0;
}