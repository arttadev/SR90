#include "JSstringInC.h"

void include_str(char *str, char *inc)
{
    printf("%s\n", strstr(str, inc) != NULL ? "True!" : "False!");
}

int main()
{
    char *str = "This is includes method";
    char *inc = "includess";
    include_str(str, inc);
}