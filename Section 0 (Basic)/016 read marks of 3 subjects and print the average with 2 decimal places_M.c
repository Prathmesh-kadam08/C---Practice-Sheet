//16 Write a program: read marks of 3 subjects and print the average with 2 decimal places

#include<stdio.h>

int main()
{
    int m1, m2, m3;

    printf("Enter marks:");
    scanf("%d %d %d", &m1, &m2, &m3);

    float avg = (m1+m2+m3)/3;

    printf("Average: %f ",avg);

    return 0;
}            //NESS