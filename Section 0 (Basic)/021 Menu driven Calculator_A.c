/*21 Write a program: menu-driven calculator  (1 Add, 2 Subtract, 3 Multiply, 4 Divide, 5 Exit) that
repeats until the user chooses Exit*/

#include<stdio.h>

int main()
{
    int choice;
    int a, b;

    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");

tillEnd:
        printf("Enter a choice:");
    scanf("%d", &choice);

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Addition = %d\n", a+b);
            goto tillEnd;

        case 2:
            printf("Substraction = %d\n", a-b);
            goto tillEnd;

        case 3:
            printf("Multiply = %d\n", a*b);
            goto tillEnd;

        case 4:
            printf("Divide = %d\n", a/b);
            goto tillEnd;

        case 5:
            printf("Exit");
            break;
            //Draw-Back : Here after choice entry we need to enter Nubers too

        default:
            printf("Invalid choice please choose between 1-5");
    }

    

    return 0;
}            //NESS