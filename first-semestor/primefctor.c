#include <stdio.h>
int main()
{
    int low, high, i, flag;
    printf("Enter one numbers: ");
    scanf("%d",&high);
    printf("Prime factor of numbers %d : ", high);
    low=1;

    while (low <= high)
    {
    //logic to find factors of any number.
    if(high%low==0)
      {
        flag = 0;

        //logic to check prime numbers
        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }


        if (flag == 0)
            printf("%d ", low);

      }
        ++low;
    }

    return 0;
}
