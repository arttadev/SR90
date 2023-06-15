#include "JSstringInC.h"

char *replace(char *str, char *mutable, char *new)
{
    int newStrSize = strlen(str) - strlen(mutable) + strlen(new);
    char *newStr = (char*)malloc(sizeof(char)* newStrSize + 1);
    char *newIndex = strstr(str, mutable);
    int i = 0;
    while (i < +(newIndex - str))
    {
        newStr[i] = str[i];
        i++;
    }
    strcpy(newStr + i, new);
    strcpy(newStr + i + strlen(new), str + i + strlen(mutable));
    return newStr;
}

int main()
{
    char *str = "This is replace method.";
    char *newStr = replace(str, "replace", "a");
    printf("%s\n", newStr);
    free(newStr);
}