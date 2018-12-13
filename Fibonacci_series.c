#include<stdio.h>
#include<math.h>

int main()
{
    int n,t1=0,t2=1;
    printf("Enter a no. :\t");
    scanf("%d",&n);

    printf("Fibonacci Serie:\n");

    for(int i=0; i<=n; i++)
    {

       printf("%d  ",t1);
     int nexttern = t1 + t2;
      t1 = t2;
      t2 = nexttern;
    }
    printf("\n");


    return 0;
}

