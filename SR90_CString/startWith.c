#include "JSstringInC.h"

void startWith(char *str, char *start, int position)
{
    int result = strncmp(str + position, start, strlen(start));
    printf("%s\n", result == 0 ? "True!" : "False!");
}

int main()
{
    char *str = "This is startWith method.";
    startWith(str, "his", 1);
}