#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main()
{
    int* p;
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array)/sizeof(array[0]);
    p = array;
    reverseArray(p, size);
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p+i));
    }
    return 0;
}