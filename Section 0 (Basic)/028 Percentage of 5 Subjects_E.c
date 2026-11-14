//28 Percentage of 5 Subjects

#include<stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    float per;

    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    per = (m1+m2+m3+m4+m5)/5.0;

    printf("Percentage of 5 subjects = %f", per);

    return 0;
}             //NESS