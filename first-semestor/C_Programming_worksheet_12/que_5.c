#include<stdio.h>
int main()
{
    int m;
    double x;
    char y;
    printf("Enter the value: %d \n\t1. For Character to INTEGER value  %c\n\t2.For INTEGER to Character value  %d\n", m, x, y);

    if(x==1)
    {
        scanf("Y = %c\t INTEGER value = %d\n",&x,&x);
        printf("X = %c\tASCI Value = %d \n\n", x);
    }


    return 0;
}
