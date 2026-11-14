//26 Simple Interest

#include<stdio.h>

int main()
{
    float P, T, R, SI;

    printf("Enter Principle, Time and Rate:");
    scanf("%f %f %f", &P, &T, &R);

    SI = (P*T*R)/100.0;

    printf("Simple Interest = %f", SI);

    return 0;
}             //NESS