#include "JSstringInC.h"

int isWhiteSpaceTrue(char c)
{
    if (c == ' ' || c == '\t' || c == '\r' || c == '\v' || c == '\f' || c == '\n')
        return 1;
    return 0;
}

void trimEnd(char *str)
{
    int endPoint = 0;
    for (int i = strlen(str) - 2; i > -1; i--)
    {
        if (isWhiteSpaceTrue(str[i]))
        {
            endPoint = i;
            break ;
        }
    }
    char *newStr = malloc(sizeof(char) * endPoint);
    for (int i = 0; i < endPoint; i++)
        newStr[i] = str[i];
    newStr[endPoint] = '\0';
    printf("%s\n", newStr);
    free(newStr);
}

int main()
{
    char str[] = "This is trimEnd method.  ";
    trimEnd(str);
}