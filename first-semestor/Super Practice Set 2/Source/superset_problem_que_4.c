#include <stdio.h>
main()
{
    float gross, tax, net;
    printf("Gross Salary: ");
    scanf("%f", &gross);
    tax = 0.14 * gross;
    net = gross - tax;
    printf("Taxes withheld: %.2f\n", tax);
    printf("Net Salary: %.2f", net);
}
