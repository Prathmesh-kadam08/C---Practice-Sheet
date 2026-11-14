//29 Converting Temperature Celsius into Fahrenheit

#include<stdio.h>

int main()
{
    float C, F;

    printf("Enter Temperature in Celsius: ");
    scanf("%f", &C);

    F = (9/5.0 * C )+ 32;

    printf("The Fahrenheit Temperature is: %f", F);

    return 0;
}             //NESS