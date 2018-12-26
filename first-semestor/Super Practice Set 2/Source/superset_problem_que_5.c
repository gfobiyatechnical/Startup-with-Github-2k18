#include<stdio.h>
int smaller(int a, int b);
main()
{
    int a, b, min;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    min = smaller(a, b);
    printf("\nThe smaller number is: %d", min);
}
int smaller(int a, int b)
{
    if (a <= b)
    {
        return(a);
    }
    else
    {
        return(b);
    }
}
