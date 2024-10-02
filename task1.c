#include <stdio.h>
#include <stdlib.h>

const int defaultSize = 4;
int defaultCapacity = 12;
typedef struct queue{
    int* array;
    int begin;
    int end;
    int currentSize;
    int capacity;
}queue;

queue* myQueue;

void enqueue(int value)
{
    int *temp;
    if (myQueue -> array == NULL)
    {
        calloc(defaultSize, defaultSize*sizeof(int));
    }
    if else ()
    myQueue -> array = malloc(sizeof(int));
}


int main()
{
    myQueue -> currentSize = defaultSize;
    myQueue -> capacity = defaultCapacity;
    return 0;
}