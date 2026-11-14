#include<stdio.h>

int main()
{
    int code = 36;
    int sc;

    for(int i=1; i<=5; i++)
    {
        printf("Number of tries %d\n", i);

        printf("Enter secret code: ");
        scanf("%d", &sc);

        if(code != sc)
        {
           
            if(sc > code)
            {
                printf("Lower\n");
            }
            else if(sc < code)
            {
                printf("Higher\n");
            }
        }
        else if(code == sc)
            {
                printf("Secret code matches!!\n");
                break;
            }    
    }

    return 0;
}            //NESS