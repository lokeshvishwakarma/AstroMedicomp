#include<stdio.h>

int main(void)
{
    // variable declaration
    int i;

    // code
    printf("\n\n");
    printf("Printing digits 1 to 10 : \n\n");

    i = 1;
    do
    {
        printf("\t%d\n", i);
        i++;
    } while (i <= 10);
    printf("\n\n");

    return 0;
}