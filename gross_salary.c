/* Calculate Mojahidul Islam’s gross salary*/

#include<stdio.h>

int main()

{
    float bp, da, hra, grpay;
    printf("\nEnter Basic Salary of Mojahidul Islam: ");
    scanf("%f", &bp);
    da = 0.4 * bp;
    hra = 0.2 * bp;
    grpay = bp + da + grpay;

    printf("Basic Salary of Mojahidul Islam = %f\n", bp);
    printf("Dressness Allownce = %f\n", da);
    printf("House Rent Allownce = %f\n", hra);
    printf("Gross Pay of Mojahidul Islam = %f\n", grpay);
    return 0;
}
