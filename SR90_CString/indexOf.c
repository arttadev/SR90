#include "JSstringInC.h"

void indexOf(char *str, char *inc)
{
    char *newStr = strstr(str, inc);
    if (newStr == NULL)
        return ;
    printf("%ld\n", newStr - str);
}

int main()
{
    char *str = "This is indexOf method";
    char *inc = "includes";
    indexOf(str, inc);
}