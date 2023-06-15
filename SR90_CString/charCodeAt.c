#include "JSstringInC.h"

char charCodeAt(char *str, int index)
{
	if (index >= strlen(str) || index < 0)
	{
		return 0;
	}
	return str[index];
}

int main()
{
	char *str = "This is charCodeAT method";
	int index = -6;
	printf("The character code %d is equal to '%c'\n", charCodeAt(str, index), charCodeAt(str, index));
	return (0);
}
