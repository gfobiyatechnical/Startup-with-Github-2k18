#include<stdio.h>
int smaller(int a, int b);
main()
{
    int a, b, min;
    printf("To STOP, enter 0 for each number\n");
    printf("\nPlease enter the first number: ");
    scanf("%d", &a);
    printf("Please enter the second number: ");
    scanf("%d", &b);
    while (a != 0 || b != 0)
    {
        min = smaller(a, b);
        printf("\nThe smaller number is: %d\n", min);
        printf("\nPlease enter the first number: ");
        scanf("%d", &a);
        printf("Please enter the second number: ");
        scanf("%d", &b);
    }
}
int smaller(int a, int b)
{
    if ( a <= b)
    {
        return(a);
    }
    else
    {
        return(b);
    }
}
