#include <stdio.h>

void reduce(int arr[], int len, int startNum)
{
	for (int i = 0; i < len; i++)
	{
		startNum += arr[i];
	}
	printf("The sum of arrays elements is %d.\n", startNum);
}

int main()
{
	int arr[] = {2, 4, 6, 8};
	int len = sizeof(arr) / sizeof(int);
	reduce(arr, len, 4);
	return 0;
}
