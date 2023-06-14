#include <stdio.h>

void lastIndexOf(int arr[], int len, int elem)
{
	int index = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == elem)
			index = i;
	}
	if (index == 0)
	{
		printf("-1\n");
		return ;
	}
	printf("The last %d is index of %d\n", elem, index);
	return ;
}

int main()
{
	int array[] = {1, 3, 987, 34, 0, 1};
	int len = sizeof(array) / sizeof(int);
	lastIndexOf(array, len, 4);
	return 0;
}
