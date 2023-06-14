#include <stdio.h>
#include <stdlib.h>

int* flat(int** arr, int rows, int cols, int* size)
{
    int total = rows * cols;
    int* flattenedArray = (int*)malloc(total * sizeof(int));
    int index = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flattenedArray[index] = arr[i][j];
            index++;
        }
    }
    *size = total;
    return flattenedArray;
}

void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main()
{
    int rows = 3;
    int cols = 3;
    int *arr[] = {(int[]){1, 2, 3}, (int[]){4, 5, 6}, (int[]){7, 8, 9}};
    int result;
    int *flattenedArray = flat(arr, rows, cols, &result);
    printf("Flattened Array: ");
    printArray(flattenedArray, result);
    free(flattenedArray);
    return 0;
}


