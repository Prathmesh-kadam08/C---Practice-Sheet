//30 The Display Size of the Different Data Type

#include<stdio.h>

int main()
{
    // sizeof(data-type) format specifier %zu

    printf("Size of integer is: %zu\n", sizeof(int));

    printf("Size of character: %zu\n", sizeof(char));

    printf("Memory size of float: %zu\n", sizeof(float));

    printf("Memory size of double: %zu\n", sizeof(double));

    printf("Memory size of long int: %zu\n", sizeof(long int));

    printf("Memory size of short int: %zu\n", sizeof(short int));

    printf("Memory size of long long int: %zu\n", sizeof(long long int));

    return 0;
}             //NESS