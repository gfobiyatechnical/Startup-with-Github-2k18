#include<stdio.h>
int main()
{
    int ctr1 = 0, ctr2 = 0;
    for ( ctr1 = 1 ; ctr1 <= 5 ; ctr1++ )
    {
        for ( ctr2 = 1 ; ctr2 <= ctr1 ; ctr2++ )
        {
            printf("%d ", ctr1);
        }
        printf("\n");
    }
    return 0;
}
