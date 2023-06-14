#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int (*fptrFilter)(int);

int isNegative(int number) {
    return number < 0;
}

int isPositive(int num)
{
	return num >= 0;
}

int isPrime(int number) {
    if (number < 2)
        return 0;

    int sqrtNumber = (int)sqrt(number);
    for (int i = 2; i <= sqrtNumber; i++) {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int isEven(int number)
{
    return number % 2 == 0;
}

int isOdd(int number)
{
    return number % 2 != 0;
}

int isGreaterThanTen(int number)
{
    return number > 10;
}

void filter(int arr[], const int len, fptrFilter check)
{
	int *array = malloc(sizeof(int));
	int l = 0;
	for (int i = 0; i < len; i++)
	{
		if (check(arr[i]))
		{
			array[l] = arr[i];
			l++;
			array = realloc(array, sizeof(int) * l + 1);
		}
	}
	for (int i = 0; i < l; i++)
	{
		printf("%d\n", array[i]);
	}
	free(array);
}

int main()
{
	int arr[] = {23, 6, 16, 3, 6};
	int len = sizeof(arr) / sizeof(int); 
	filter(arr, len, isPrime);
}
