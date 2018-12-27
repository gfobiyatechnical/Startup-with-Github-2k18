#include <stdio.h>
int main()
{
    int days,months,years,weeks=0;
    printf("Enter no. of Days: \n");
    scanf("%d", &days);

    years = days/365;
    weeks = days/7;
    int x = days%365;

    //months = x/30;
    days = x%30;


    printf(" YEARS = %d\n WEAKS = %d\n DAYS = %d\n", years, weeks, days);

    return 0;
}
