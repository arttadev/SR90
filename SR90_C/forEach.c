#include <stdio.h>

void forEach(int array[], int len)
{
	for(int i = 0; i < len; i++)
		printf("%d element -> %d\n", i + 1, array[i]);
}

int main()
{
	int array[] = {23, 34, 2, -1, 0};
	int len = sizeof(array) / sizeof(int);
	forEach(array, len);
	return 0;
}
