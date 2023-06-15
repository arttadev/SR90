#include "JSstringInC.h"

void endsWith(const char* str, const char* suffix, int endPosition)
{
    size_t strLen = strlen(str);
    size_t suffixLen = strlen(suffix);
    if (suffixLen > strLen)
    {
        printf("False!\n");
        return ;
    }
    int start = endPosition - suffixLen + 1;
    if (start < 0 || start > strLen)
    {
        printf("False!\n");
        return ;
    }
    int result = strncmp(str + start, suffix, suffixLen);
    printf("%s\n", result == 0 ? "True!" : "False!");
}

int main()
{
    char *str = "This is endWith method";
    int endPosition = 21;
    endsWith(str, "method", endPosition);
}