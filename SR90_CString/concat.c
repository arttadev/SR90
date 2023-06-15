#include "JSstringInC.h"

char *concat(char *str1, char *con, char *str2)
{
    int str1Len = strlen(str1);
    char *newStr = (char*)malloc(str1Len + strlen(str2) + strlen(con) * sizeof(char) + 1);
    strcpy(newStr, str1);
    strcpy(newStr + str1Len, con);
    strcpy(newStr + str1Len + strlen(con), str2);
    return newStr;
}

int main()
{
    char *str1 = "Hello";
    char *str2 = "World!";
    char *con = ", ";
    char *newStr = concat(str1, con, str2);
    printf("%s\n", newStr);
    free(newStr);
    return 0;
}