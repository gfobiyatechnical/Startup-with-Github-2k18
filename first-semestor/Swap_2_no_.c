#include<stdio.h>
int  swap(int *,int *);
int main()
{
    int a,b;
    printf("enter two no");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
printf("SWAPED no. is:  %d  %d",a,b);

return a;
return b;

}


int swap(int *a,int *b)
{
        int c;
        c= *a;
        *a=*b;
        *b=c;

return c;

}



