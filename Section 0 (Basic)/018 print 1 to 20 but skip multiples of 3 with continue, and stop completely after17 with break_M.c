/*18 Write a program: print 1 to 20 but skip multiples of 3 with continue, and stop completely after
17 with break*/

#include<stdio.h>

int main()
{
    for(int i=1; i<=20; i++)
    {
        if(i%3 == 0)
        {
            continue;
        }
        else if(i==17)
        {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}            //NESS