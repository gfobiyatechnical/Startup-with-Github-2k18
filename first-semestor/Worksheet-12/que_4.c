#include<stdio.h>
#define PIE 3.14

int main()
{
   double duri=0,volume,area;
   printf("Enter the value of radius: \n ",duri);
   scanf("%lf",&duri);

    if(duri>0)
    {


        volume = (4/3)*PIE*duri*duri*duri;
        area = 4*PIE*duri*duri;

        printf("VOLUME of sphere = %.2lf\n", volume);
        printf("AREA of sphere = %.2lf\n", area);
    }
    else
            printf("*****\tINVALID ENTERY\t******\n\n");
return 0;
}
