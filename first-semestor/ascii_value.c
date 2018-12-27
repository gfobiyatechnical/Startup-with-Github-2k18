#include <stdio.h>
int main()
{
    int num,logo=1;
    printf("Enter a no. :\t");
    scanf("%d",&num);




    int x=num;
    int rem=0,rev=0,no=num;
    while( num != 0 )
    { //logic to check Polindome numbers

        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;



        // logic to check prime numbers
    for(int i=2; i<= num/2; i++ )
    {
        if(num%i==0)
        {
            logo=0;
            break;
        }
    }


    }

    if(logo==1)
        printf("%d is PRIME Number\n",x);
    else
        printf("%d is NOT A PRIME Number \n",x);

    if(rev==no)
        printf("%d is polindrome",x);
    else
        printf("%d is not polindrome\n",x);


    return 0;
}
