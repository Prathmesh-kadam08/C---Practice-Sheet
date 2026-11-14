//24 Print Ascii Value of the Character

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    printf("The ASCII value of character %c is = %d",ch, (int)ch);

    return 0;
}             //NESS