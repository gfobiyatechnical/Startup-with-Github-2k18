#include<stdio.h>
#include <stdlib.h>
#define SIZE 40

int main()
{
   int i=0;
   printf("Series 3 from 1 upto 40 : \n ");

   for(i=1;i<=SIZE;i+=3)
    {
       int m = pow(-1,i+1);
        printf("%d\t",i*m);
    }

    printf("\n");

return 0;
}
