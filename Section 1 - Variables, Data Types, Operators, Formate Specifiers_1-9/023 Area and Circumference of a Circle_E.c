//23 Area and Circumference of a Circle

#include<stdio.h>

int main()
{
    int r;
    float area, cmp;

    printf("Enter radius: ");
    scanf("%d", &r);

    area = r*r*3.14;
    cmp = 2*r*3.14;

    printf("The Area is: %f\n", area);
    printf("The Circumference = %f", cmp);

    return 0;
}             //NESS
