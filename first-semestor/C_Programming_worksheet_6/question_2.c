#include <stdio.h>
int fun(int x);

int main()
{
    int x ,n ;
    printf("Enter a Number: \n");
    fun(x);

    return 0;
}

int fun(int x)
{
    int n;
    scanf("%d", &n);
    x = n*n*n;
   printf("cube = %d",x);
}
