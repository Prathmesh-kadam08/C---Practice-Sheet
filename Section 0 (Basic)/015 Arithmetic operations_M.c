/*15 Write a program: read two numbers and print their sum, difference, product, quotient and
remainder*/

#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a+b);
    printf("Diff = %d\n", a-b);
    printf("Product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);
    printf("Remainder = %d\n", a%b);

    return 0;
}            //NESS