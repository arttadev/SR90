#include <stdio.h>
#include <stdlib.h>

int *splice(int arr[], int arrLen, int pos, int elem)
{
	int *newArray = malloc(sizeof(int) * arrLen);
	for (int i = 0; i < pos; i++)
		newArray[i] = arr[i];
	newArray[pos++] = elem;
	for (int i = pos; i < arrLen; i++)
		newArray[i] = arr[i];
	return newArray;
}

void printArray(int arr[], int size) {
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
	int arr[] = {23, 2, 56, 24, 2};
	int len = sizeof(arr) / sizeof(int);
	int *newArray = splice(arr, len, 2, 3);
	printArray(newArray, len);
	free(newArray);
}