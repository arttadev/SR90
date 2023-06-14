#include <stdio.h>

void indexOf(int arr[], int len, int elem)
{
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == elem)
		{
			printf("The %d is index of %d\n", elem, i);
			return ;
		}
	}
}

int main()
{
	int array[] = {1, 3, 987, 34, 0, -4};
	int len = sizeof(array) / sizeof(int);
	indexOf(array, len, 987);
	return 0;
}
