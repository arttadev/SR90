#include "JSstringInC.h"

void padEnd(char *str, int size, char sym)
{
    char *newStr = malloc(sizeof(char) * size + 1);
    strcpy(newStr, str);
    for (int i = strlen(str); i < size; i++)
        newStr[i] = sym;
    printf("%s\n", newStr);
    free(newStr);
}

int main()
{
    char *str = "padEnd";
    padEnd(str, 13, '*');
}