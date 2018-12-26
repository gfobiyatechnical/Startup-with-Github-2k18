
#include<stdio.h>
#include<math.h>

int main()
{
    int n,armstrong,number,mod,sum=0;
    printf("Enter no. of Digits:\t");
    scanf("%d",&n);

    printf("Enter Your Number:\n");
    scanf("%d",&armstrong);
     number = armstrong;

    while(armstrong != 0)
    {
                mod = armstrong%10;
                sum = sum+mod*mod*mod;
                armstrong = armstrong/10;
    }

    if (sum == number)
        printf("%d is ARMSTRONG\n",number);
    else
        printf("%d is not ARMSTRONG\n",number);


return 0;
}

