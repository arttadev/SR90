#include <stdio.h>
#include <math.h>

typedef int (*fptrFindIndex)(int);

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

void findIndex(int arr[], int len, fptrFindIndex findNum)
{
	for (int i = 0; i < len; i++)
	{
		if (findNum(arr[i]))
		{
			printf("%d\n", i);
			return ;
		}
	}
}

int main()
{
	int arr[] = {-3, 2, 78, 12, 4};
	int len = sizeof(arr) / sizeof(int);
	findIndex(arr, len, isPrime);
	return 0;
}