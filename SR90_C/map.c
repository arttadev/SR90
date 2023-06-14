#include <stdio.h>
#include <math.h>

typedef double (*fptrmap)(double);

void map(int arr[], int len, fptrmap func)
{
	for (int i = 0; i < len; i++)
	{
		double num = func(arr[i]);
		printf("%lf\n", num);
	}
}

int main()
{
	int array[] = {4, 25, 16};
	int len = sizeof(array) / sizeof(int);
	map(array, len, sqrt);
}
