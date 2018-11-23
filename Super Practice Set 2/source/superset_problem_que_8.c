#include <stdio.h>

int smaller(int, int);
main()
{
    int n, i = 0;
    int a[100], b[100], min[100];
    printf("To STOP, enter 0 for each number\n");
    printf("\nPlease enter the first number: ");
    scanf("%d", &a[i]);
    printf("Please enter the second number: ");
    scanf("%d", &b[i]);
    while (a[i] || b[i])
    {
        min[i] = smaller(a[i], b[i]);
        printf("\nThe smaller number is: %d\n", min[i]);
        printf("\nPlease enter the first number: ");
        scanf("%d", &a[++i]);
        printf("Please enter the second number: ");
        scanf("%d", &b[i]);
    }
    n = --i;
    printf("\nSummary of Results\n\n");
    for ( i = 0 ; i <= n ; ++i )
    {
        printf("a = %d\tb = %d\tmin = %d\n", a[i], b[i], min[i]);
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
