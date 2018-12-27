#include<stdio.h>
int main()
{
    int a=4;
    printf("Variable: \n");
    printf("\tValue: %d\n", a);
    printf("\tAddress: %p\n", &a);
    int * p = &a;
    printf("Pointer to Variable: \n");
    printf("\tValue: %p\n", p);
    printf("\tAddress: %p\n", &p);
    printf("\t*p : %d\n", *(p));
    int * * q = &p;
    printf("Pointer to Pointer: \n");
    printf("\tValue: %p\n", q);
    printf("\tAddress: %p\n", &q);
    printf("\t*(q) : %p\n", (*p));
    printf("\t*(*(q)) : %d\n", *(*(q)));

return 0;
}
