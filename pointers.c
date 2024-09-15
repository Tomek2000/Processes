#include <stdio.h>
#include <stdlib.h>

int* p;

int main()
{
    int numberOfElements;
    int* n = &numberOfElements;
    printf("How many elements you wanna have?\n");
    printf("%d\n", *n);
    printf("%d\n", numberOfElements);
    return 0;
}