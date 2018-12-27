#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define METER_CHARGE 50

double make_bill();

int main()
{
    make_bill();
    return 0;
}

double make_bill()
{
    char name[SIZE];
    double units = 0.0;
    double billed_amount = 0.0;

    printf("Hello, please enter your name: ");
    scanf("%[^\n]s", name);

    printf("Welcome, please enter the units you have consumed: ", name);
    scanf("%lf", &units);

    if ( units < 100.0 )
    {
        billed_amount = 40.0 * units;
    }
    else if ( units > 100.0 && units < 200.0 )
    {
        billed_amount = 50.0 * units;
    }
    else if ( units > 300.0 )
    {
        billed_amount = 60.0 * units;
    }

    billed_amount += METER_CHARGE;

    printf("\nName : %s\n", name);
    printf("Billed Amount : Rs. %.2lf\n", (billed_amount / 100));

    return billed_amount;
}
