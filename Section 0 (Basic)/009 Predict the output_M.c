/*9 Predict the output: for (int i = 1; i <= 5; i++) { if (i == 3) continue;
printf("%d ", i); } */

#include<stdio.h>

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        if(i == 3)
          continue;
        printf("%d\t",i);  
    }
        
    return 0;
}            //NESS
