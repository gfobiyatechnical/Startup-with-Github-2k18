#include<stdio.h>
#include<math.h>

#define PI 3.14
float process(float radius);

int main()
{
    float radius,area;
    printf("Radius= ?");
    scanf("%f",&radius);
    printf("\n");
    if(radius<0)
    {
        area = 0;
    }
    else
    {
        area = process(radius);
    }

    printf("Area =%.2f",area);

    return 0;
}
float process(float r)
{
        float a;
    a = PI*r*r;

    return a;
}
