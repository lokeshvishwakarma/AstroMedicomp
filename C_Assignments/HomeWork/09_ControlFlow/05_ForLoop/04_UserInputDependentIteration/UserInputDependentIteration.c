#include<stdio.h>

int main(void)
{
    // variable declaration
    int i_num, num, i;

    // code
    printf("\n\n");
    printf("Enter and integer value from which iteration must begin : ");
    scanf("%d", &i_num);

    printf("How many digits do you want to print from %d onwards ? : ");
    scanf("%d", &num);

    printf("Printting digits from %d to %d : \n\n", i_num, (i_num + num));

    for (i = i_num; i <= (i_num + num); i++)
    {
        printf("\t%d\n", i);
    }
    
    return 0;
}