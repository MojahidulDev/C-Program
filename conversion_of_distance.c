/* Conversion of distance*/

#include <stdio.h>
int main()
{
    float km, m, cm, ft, inch;
    printf("\nEnter the distance of Kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    cm = m * 100;
    inch = cm / 2.54;
    ft = inch / 12;

    printf("Distance in meters = %f\n", m);
    printf("Distance in centimeters = %f\n", cm);
    printf("Distance in feet = %f\n", ft);
    printf("Distance in inches = %f\n", inch);
    return 0;
}