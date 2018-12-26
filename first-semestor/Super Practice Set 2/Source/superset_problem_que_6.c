#include<stdio.h>
int smaller(int a, int b);
main()
{
    int count, n, a, b, min;
    printf("How many pairs of numbers? ");
    scanf("%d", &n);
    for ( count = 1; count <= n ; ++count )
    {
        printf("\nEnter the first number: ");
	    scanf("%d", &a);
	    printf("Enter the second number: ");
	    scanf("%d", &b);
	    min = smaller(a, b);
	    printf("\nThe smaller number is: %d\n", min);
	}
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
