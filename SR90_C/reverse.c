#include <stdio.h>

void reverse(int arr[], int len)
{
	for (; 0 < len; len--)
	{
		printf("%d ", arr[len - 1]);
	}
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int len = sizeof(arr) / sizeof(int);
	reverse(arr, len);
	return 0;
}
