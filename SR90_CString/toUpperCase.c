#include "JSstringInC.h"

void toUpperCase(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            printf("%c", str[i] -= 32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char str[] = "This is toUpperCase method.";
    toUpperCase(str);
}