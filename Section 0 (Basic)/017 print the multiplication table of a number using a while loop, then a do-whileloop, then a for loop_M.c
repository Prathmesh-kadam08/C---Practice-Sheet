/*17 Write a program: print the multiplication table of a number using a while loop, then a do-while
loop, then a for loop*/

#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of which table you want:");
    scanf("%d", &n);

    // assuming table upto 10

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", n, i, n*i);
    }

    return 0;
}            //NESS