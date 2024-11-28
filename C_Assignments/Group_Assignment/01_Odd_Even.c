#include<stdio.h>

int main()
{
    // Code
    int num;
    
    printf("Enter a number: ");
    scanf("%d", num);

    if(num % 2 == 0)
    {
        printf("Number %d is EVEN.\n", num);
    }
    else
    {
        printf("Number %d is ODD.\n", num);
    }
    
    return 0;
}