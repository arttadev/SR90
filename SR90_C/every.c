#include <stdio.h>
#include <math.h>

typedef int (*fptrProperty)(int);

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

int every(int array[], const int len, fptrProperty property)
{
	for (int i = 0; i < len; i++)
	{
		if (!property(array[i]))
			return 0;
	}
	return 1;
}

int main()
{
	int array[] = {1, -3, -2, -4, -3};
    int len = sizeof(array) / sizeof(int);
	int result = every(array, len, isPositive);
	if (result == 1)
		printf("The array contains positive numbers.\n");
	else
		printf("The array contains positive and negative numbers.\n");
	return 0;
} 
