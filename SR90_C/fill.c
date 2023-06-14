#include <stdio.h>

void fill(int arr[], int size, int pos, int value)
{
    for (int i = pos; i < size; i++) {
        arr[i] = value;
    }
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

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    fill(arr, size, 1, 10);
    printArray(arr, size);
    return 0;
}
