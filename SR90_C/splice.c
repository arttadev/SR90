#include <stdio.h>
#include <stdlib.h>

int *splice(int arr[], int arrLen, int pos, int addArr[], int addLen)
{
	int *newArray = malloc(sizeof(int) * (arrLen + addLen));
	for (int i = 0; i < pos; i++)
		newArray[i] = arr[i];
	for (int i = 0; i < addLen; i++)
		newArray[pos + i] = addArr[i];
	for (int i = pos; i < arrLen; i++)
		newArray[addLen + i] = arr[i];
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
	int arrAdd[] = {0, 0};
	int size = sizeof(arrAdd) / sizeof(int);
	int *newArray = splice(arr, len, 2, arrAdd, size);
	int newSize= len + size;
	printArray(newArray, newSize);
	free(newArray);
}
