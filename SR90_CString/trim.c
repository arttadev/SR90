#include "JSstringInC.h"

int isWhiteSpace(char *str)
{
    int num = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == '\n')
            num += 1;
    }
    return num;
}

int isWhiteSpaceTrue(char c)
{
    if (c == ' ' || c == '\t' || c == '\r' || c == '\v' || c == '\f' || c == '\n')
        return 1;
    return 0;
}

void trim(char *str)
{
    int whiteSize = isWhiteSpace(str);
    char *newStr = malloc(sizeof(char) * strlen(str) - whiteSize);
    int l = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (!isWhiteSpaceTrue(str[i]))
            newStr[l++] = str[i];
    }
    printf("%s\n", newStr);
    free(newStr);
}

int main()
{
    char str[] = "This is trim method.";
    trim(str);
}