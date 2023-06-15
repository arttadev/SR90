#include "JSstringInC.h"

char *slice(char *str, int startIndex, int endIndex)
{
    if (startIndex < 0)
        startIndex = strlen(str) + startIndex;
    if (endIndex < 0)
        endIndex = strlen(str) + endIndex;
    if (startIndex > strlen(str) || endIndex > strlen(str) || startIndex > endIndex)
        return NULL;
    int diff = endIndex - startIndex;
    char *newStr = malloc(sizeof(char) * diff + 1);
    for (int i = 0; i < diff; i++)
        newStr[i] = str[startIndex + i];
    newStr[diff] = '\0';
    return newStr;        
}

int main()
{
    char *str = "This is slice method.";
    char *newStr = slice(str, -10, -5);
    printf("%s\n", newStr);
    free(newStr);
    return 0;
}