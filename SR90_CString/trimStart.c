#include "JSstringInC.h"

int isWhiteSpaceTrue(char c)
{
    if (c == ' ' || c == '\t' || c == '\r' || c == '\v' || c == '\f' || c == '\n')
        return 0;
    return 1;
}

void trimStart(char *str)
{
    int startPoint = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (isWhiteSpaceTrue(str[i]))
        {
            startPoint = i;
            break ;
        }
    }
    char *newStr = malloc(sizeof(char) * strlen(str) - startPoint);
    int l = 0;
    for (int i = startPoint; i < strlen(str); i++)
        newStr[l++] = str[i];
    newStr[l] = '\0';
    printf("%s\n", newStr);
    free(newStr);
}

int main()
{
    char str[] = "   This is trimStart method.";
    trimStart(str);
}