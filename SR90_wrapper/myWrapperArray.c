#include <stdio.h>
#include <stdlib.h>

typedef struct myWrapperArray
{
    int *array;
    int size;
    int capacity;
} myWrapperArray;

void init_myArray(myWrapperArray *myArray)
{
    myArray->array = NULL;
    myArray->capacity = 0;
    myArray->size = 0;
}

void push_back(myWrapperArray *myArray, int newElement)
{
    if (myArray->size == myArray->capacity)
    {
        int newCapacity = (myArray->capacity == 0) ? 1 : myArray->capacity * 2;
        int *newMyArray = (int*)realloc(myArray->array, newCapacity * sizeof(int));
        if (!newMyArray)
        {
            printf("Failed!!");
            return ;
        }
        myArray->array = newMyArray;
        myArray->capacity = newCapacity;
    }
    myArray->array[myArray->size] = newElement;
    myArray->size++;
}

void reserve(myWrapperArray *myArray, int num)
{
    if (num > myArray->capacity)
    {
        int newCapacity = num;
        int *newMyArray = (int*)realloc(myArray->array, newCapacity * sizeof(int));
        if (!newMyArray)
        {
            printf("Failed to allocate memory!\n");
            return ;
        }
        myArray->array = newMyArray;
        myArray->capacity = newCapacity;
    }
}

void insert(myWrapperArray *myArray, int position, int newElement)
{
    if (position < 0 || position > myArray->size)
    {
        printf("Invalid position!\n");
        return ;
    }
    if (myArray->size == myArray->capacity)
    {
        int newCapacity = (myArray->capacity == 0) ? 1 : myArray->capacity * 2;
        int *newMyArray = (int*)realloc(myArray->array, newCapacity * sizeof(int));
        if (!newMyArray)
        {
            printf("Failed!!");
            return ;
        }
        myArray->array = newMyArray;
        myArray->capacity = newCapacity;
    }
    for (int i = myArray->size - 1; i >= position; i--)
    {
        myArray->array[i + 1] = myArray->array[i];
    }
    myArray->array[position] = newElement;
    myArray->size++;
}

int at(myWrapperArray *myArray, int position)
{
    if (position < 0 || position > myArray->capacity)
    {
        printf("Invalid position!\n");
        return -1;
    }
    return myArray->array[position];
}

int size(myWrapperArray *myArray)
{
    return myArray->size;
}

int empty(myWrapperArray *myArray)
{
    return myArray->size == 0;
}

int capacity(myWrapperArray *myArray)
{
    return myArray->capacity;
}

int main()
{
    myWrapperArray  myArray;
    init_myArray(&myArray);
    reserve(&myArray, 4);
    push_back(&myArray, 5);
    push_back(&myArray, 3);
    push_back(&myArray, 2);
    insert(&myArray, 1, 5);
    printf("%d\n", myArray.array[1]);
    free(myArray.array);
    return 0;
}