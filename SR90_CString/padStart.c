#include "JSstringInC.h"

void padStart(char *str, int size, char sym)
{
    char *newStr = malloc(sizeof(char) * size + 1);
    for (int i = 0; i < size - strlen(str); i++)
        newStr[i] = sym;
    strcpy(newStr + size - strlen(str), str);
    printf("%s\n", newStr);
    free(newStr);
}

int main()
{
    char *str = "padStart";
    padStart(str, 15, '*');
}