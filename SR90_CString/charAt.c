#include "JSstringInC.h"

char charAt(char *str, int index)
{
	int strLength = strlen(str);
	int positiveIndex = (index < 0) ? strLength + index : index;
	if (positiveIndex >= strlen(str))
	{
		printf("Using an index of %d the character returned is ''\n", index);
		exit(0);
	}
	return str[positiveIndex];
}

int main()
{
	char *str = "This is charAt method";
	int index = -600;
	printf("Using an index of %d the character returned is '%c'\n", index, charAt(str, index));
	return 0;
}