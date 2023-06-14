#include <stdio.h>

int maxDigit(int number)
{
    int maxDigit = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }
    return maxDigit;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (maxDigit(arr[j]) > maxDigit(arr[j + 1]))
                swap(&arr[j], &arr[j + 1]);
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
	int arr[] = {3, 200, 4, 1000};
	int len = sizeof(arr) / sizeof(int);
	sort(arr, len);
	printArray(arr, len);
	return 0;
}
