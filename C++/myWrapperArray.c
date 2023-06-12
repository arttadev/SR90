#include <stdio.h>
#include <stdlib.h>

typedef struct myWrapperArray
{
    int *array;
    int size;
    int capacity;
} myWrapperArray;

void init(myWrapperArray *arr)
{
    arr->array = NULL;
    arr->capacity = 0;
    arr->size = 0;
}

void push_back(myWrapperArray* arr, int elem)
{
    if (arr->size == arr->capacity) {
        int newCapacity = (arr->capacity == 0) ? 1 : arr->capacity * 2;
        int* newArray = (int*)realloc(arr->array, newCapacity * sizeof(int));
        if (newArray == NULL) {
            printf("Failed to allocate memory.");
            return;
        }
        arr->array = newArray;
        arr->capacity = newCapacity;
    }
    arr->array[arr->size] = elem;
    arr->size++;
}

void reserve(myWrapperArray *arr, int num) {
    if (num > arr->capacity) {
        int newCapacity = num;
        int* newArray = (int*)realloc(arr->array, newCapacity * sizeof(int));
        if (newArray == NULL) {
            printf("Failed to allocate memory.");
            return;
        }
        arr->array = newArray;
        arr->capacity = newCapacity;
    }
}

void insert(myWrapperArray *arr, int pos, int elem) {
    if (pos < 0 || pos > arr->size) {
        printf("Invalid position.");
        return;
    }
    if (arr->size == arr->capacity) {
        int newCapacity = (arr->capacity == 0) ? 1 : arr->capacity * 2;
        int* newArray = (int*)realloc(arr->array, newCapacity * sizeof(int));
        if (newArray == NULL) {
            printf("Failed to allocate memory.");
            return;
        }
        arr->array = newArray;
        arr->capacity = newCapacity;
    }
    for (int i = arr->size - 1; i >= pos; i--) {
        arr->array[i + 1] = arr->array[i];
    }
    arr->array[pos] = elem;
    arr->size++;
}

int at(myWrapperArray *arr, int pos) {
    if (pos < 0 || pos >= arr->size) {
        printf("Invalid position.");
        return -1;
    }
    return arr->array[pos];
}

int size(myWrapperArray *arr) {
    return arr->size;
}

int empty(myWrapperArray *arr) {
    return arr->size == 0;
}

int capacity(myWrapperArray *arr) {
    return arr->capacity;
}

int main()
{
    myWrapperArray  array;
    init(&array);
    push_back(&array, 1);
    push_back(&array, 4);
    push_back(&array, 3);
    printf("Size: %d\n", size(&array));
    printf("Empty: %d\n", empty(&array));
    printf("Capacity: %d\n", capacity(&array));
    printf("Element at position 1: %d\n", at(&array, 1));
    reserve(&array, 10);
    insert(&array, 1, 7);
    printf("Size: %d\n", size(&array));
    printf("Element at position 1: %d\n", at(&array, 1));

    free(array.array);
    return 0;
}