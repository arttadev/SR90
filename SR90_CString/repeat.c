#include "JSstringInC.h"

char *repeat(char *str, int times)
{
    char *newStr = malloc(sizeof(char) * strlen(str) * times + 1);
    strcpy(newStr, str);
    for (int i = 1; i < times; i++)
        strcpy(newStr + strlen(str) * i, str);
    return newStr;
}

int main()
{
    char *str = "Safe ";
    char *newStr = repeat(str, 5);
    printf("%sWorld!\n", newStr);
    free(newStr);
}