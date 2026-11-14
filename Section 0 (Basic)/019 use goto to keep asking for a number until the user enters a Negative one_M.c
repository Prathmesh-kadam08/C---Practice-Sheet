/*19 Write a program: use goto to keep asking for a number until the user enters a Negative one*/

//Code will Run until user enter Negative Number

#include<stdio.h>

int main()
{
    int n;

    again:
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>0)
    {
        goto again;
    }

    printf("Entered Number is negative: %d", n);

    return 0;
}            //NESS
