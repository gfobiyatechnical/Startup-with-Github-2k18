  //  author: Rakesh yadav
  // aim : To swap 3 numbers using pointer.

#include<stdio.h>
void Swap(int *a,int *b,int *c);

int main()
{
    int a, b, c;

    printf("Enter value of a, b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n",a,b,c);

    Swap(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d",a, b, c);

    return 0;
}
//logic to swap 3 no.
void Swap(int *a,int *b,int *c)
{

    int temp;

    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
}
