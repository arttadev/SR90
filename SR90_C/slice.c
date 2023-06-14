#include <stdio.h>

void slice(int arr[], int start, int len_end)
{
	for (int i = start; i < len_end; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5,6};
	slice(arr, 0, 4);
	return 0;
}
