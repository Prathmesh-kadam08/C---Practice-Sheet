//25 Area of Triangle

#include<stdio.h>

int main()
{
    int h,b;
    float area;

    printf("Enter height and breadth: ");
    scanf("%d %d",&h,&b);

    area = 1/2.0*(h*b);

    printf("Area of triangle = %f",area);

    return 0;
}             //NESS