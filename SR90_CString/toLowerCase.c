#include "JSstringInC.h"

void toLowerCase(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            printf("%c", str[i] += 32);
        else
            printf("%c", str[i]);
    }
    printf("\n");
}

int main()
{
    char str[] = "This is toLowerCase method.";
    toLowerCase(str);
}