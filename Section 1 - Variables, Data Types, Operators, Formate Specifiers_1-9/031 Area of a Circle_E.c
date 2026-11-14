//31 Area of a Circle

#include<stdio.h>

int main()
{
    int r;
    float area;

    printf("Enter radius of the circle:");
    scanf("%d", &r);

    area = r*r*3.14;

    printf("Area of the circle = %f", area);

    return 0;
}             //NESS