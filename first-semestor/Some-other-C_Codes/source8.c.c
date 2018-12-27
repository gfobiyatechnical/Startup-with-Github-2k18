#include <stdio.h>
int a=3;
int b=3;
int c=3;
int main()
{
    if( a == b == b == c)
    {
	    printf("%d %d %d", a, b, c);
    }
    return 0;
}
