#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replaceAll(const char* str, const char* search, const char* replace)
{
    int searchLen = strlen(search);
    int replaceLen = strlen(replace);
    int resultLen = strlen(str) + 1;
    char* result = (char*)malloc(resultLen * sizeof(char));
    strcpy(result, str);
    char* occurrence = strstr(result, search);

    while (occurrence != NULL)
    {
        int diffLen = replaceLen - searchLen;
        resultLen += diffLen;
        result = (char*)realloc(result, resultLen * sizeof(char));
        char* remaining = occurrence + searchLen;
        memmove(occurrence + replaceLen, remaining, strlen(remaining) + 1);
        strncpy(occurrence, replace, replaceLen);
        occurrence = strstr(occurrence + replaceLen, search);
    }
    return result;
}

int main() {
    char str[] = "This is replace method.";
    char* replaced = replaceAll(str, "replace", "T");
    printf("%s\n", replaced);
    free(replaced);
    return 0;
}
