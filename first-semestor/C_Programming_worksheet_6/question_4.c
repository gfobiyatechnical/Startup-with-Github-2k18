#include<stdio.h>
#include<string.h>
int main()
{
        char name[50];
        float rupia_btauu;
        int kitna_unit_jaoge_Janab, unit_krcha, meret_charge = 50 ;

        printf("Enter Your Name:    ");
        scanf("%s\n", &name);

        printf("Distance (in meter):    ");
        scanf(" %d\n ", &kitna_unit_jaoge_Janab);
        float x = 0.0 , y = 0.0 , z = 0.0;

        if (kitna_unit_jaoge_Janab > 0 )
        {

            if( kitna_unit_jaoge_Janab > 0 && kitna_unit_jaoge_Janab <= 100 )
                {
                    x = 0.4*kitna_unit_jaoge_Janab;
                }

            if( kitna_unit_jaoge_Janab > 100 && kitna_unit_jaoge_Janab <= 300 )
                {
                      y = 0.5*kitna_unit_jaoge_Janab;
                }

            if ( kitna_unit_jaoge_Janab >= 300 )
                {
                        z = 0.6*kitna_unit_jaoge_Janab;
                }

            rupia_btauu = meret_charge + x + y + z ;

             printf("\n\n *******\tNAME: %s\t*******\n", name);
             printf("\t\t CHARGE: %.2f\t\n", rupia_btauu);

        }





    return 0;
}
