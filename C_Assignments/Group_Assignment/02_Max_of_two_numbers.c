#include <stdio.h>

int main(void)
{
    // variable declaration
    int a, b;

    printf("Enter a number: ");
    scanf("%d", a);

    printf("Enter another number: ");
    scanf("%d", b);

    if (a > b)
    {
        printf("Number %d is greater than Number %d.\n", a, b);
    }
    else
    {
        printf("Number %d is less than Number %d.\n", a, b);
    }

    return 0;
}