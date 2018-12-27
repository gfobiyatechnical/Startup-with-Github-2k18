#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number of elements:   ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Reverse:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }


    return 0;
}
